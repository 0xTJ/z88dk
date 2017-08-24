
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "utlist.h"

#include "ticks.h"
#include "linenoise.h"

#define HISTORY_FILE ".ticks_history.txt"

typedef struct {
   const char    *name;
   const char    *file;
   int            address;
} symbol;

typedef enum {
    BREAK_PC,
    BREAK_REG
} breakpoint_type;

typedef struct breakpoint {
    breakpoint_type   type;
    int               value;
    struct breakpoint *next;
} breakpoint;

typedef struct {
    char   *cmd;
    int   (*func)(int argc, char **argv);
    char   *help;
} command;



static void completion(const char *buf, linenoiseCompletions *lc, void *ctx);
static char **parse_words(char *line, int *argc);
static int cmd_step(int argc, char **argv);
static int cmd_continue(int argc, char **argv);
static int cmd_disassemble(int argc, char **argv);
static int cmd_registers(int argc, char **argv);
static int cmd_break(int argc, char **argv);




static command commands[] = {
    { "step",   cmd_step,           "Step the instruction" },
    { "cont",   cmd_continue,       "Continue execution" },
    { "dis",    cmd_disassemble,    "Disassemble current instruction" },
    { "reg",    cmd_registers,      "Display the registers" },
    { "break",  cmd_break,          "Handle breakpoints" },
    { NULL, NULL, NULL }
};


static breakpoint *breakpoints;

static int debugger_active = 1;

static symbol  *symbols = NULL;
static int      symbols_num = 0;

void debugger_init()
{
    linenoiseSetCompletionCallback(completion, NULL);
    linenoiseHistoryLoad(HISTORY_FILE); /* Load the history at startup */
}


static void completion(const char *buf, linenoiseCompletions *lc, void *ctx) 
{
    command *cmd= &commands[0];

    while ( cmd->cmd != NULL ) {
        if ( strncmp(buf, cmd->cmd, strlen(buf)) == 0 ) {
            linenoiseAddCompletion(lc, cmd->cmd);
        }
        cmd++;
    }
}

void debugger()
{
    char   prompt[100];
    char  *line;

    if ( debugger_active == 0 ) {
        breakpoint *elem;
        int         i = 1;
        int         dodebug = 0;
        LL_FOREACH(breakpoints, elem) {
            if ( elem->type == BREAK_PC && elem->value == pc ) {
                printf("Hit breakpoint %d\n",i);
                dodebug=1;
                break;
            }
            i++;
        }
        /* Check breakpoints */
        if ( dodebug == 0 ) return;
    }


    disassemble(pc);
    /* In the debugger, loop continuously for commands */
    snprintf(prompt,sizeof(prompt)," %04x >", pc);  // TODO: Symbol address

    while ( (line = linenoise(prompt) ) != NULL ) {
        int argc;
        char **argv;
        if (line[0] != '\0' && line[0] != '/') {
            int return_to_execution = 0;
            linenoiseHistoryAdd(line); /* Add to the history. */
            linenoiseHistorySave(HISTORY_FILE); /* Save the history on disk. */

            /* Lets chop the line up into words now */
            argv = parse_words(line, &argc);

            if ( argc > 0 ) {
                command *cmd = &commands[0];
                while ( cmd->cmd ) {
                    if ( strcmp(argv[0], cmd->cmd) == 0 ) {
                        return_to_execution = cmd->func(argc, argv);
                        break;
                    }
                    cmd++;
                }
                free(argv);
            }
            if ( return_to_execution ) {
                /* Out of the linenoise loop */
                break;
            }
        } else {
            /* Empty line is step */
            debugger_active = 1;
            break;
        }
    }
}

static char **parse_words(char *line, int *argc)
{
    int                 i = 0, j = 0 , n = 0;
    int                 len = strlen(line);
    int                 in_single_quotes = 0, in_double_quotes = 0;
    char              **args;

    while ( isspace(line[i] ) ) {
        i++;
    }

    for ( ; i <= len; i++) {
        switch (line[i]) {
        case '"':
            if (in_single_quotes) {
                line[j++] = line[i];
                break;
            }
            in_double_quotes = !in_double_quotes;
            break;
        case '\'':
            if (in_double_quotes) {
                line[j++] = line[i];
                break;
            }
            in_single_quotes = !in_single_quotes;
            break;
        case ' ':
        case '\t':
        case '\r':
        case '\n':
        case 0:
            if (!in_single_quotes && !in_double_quotes) {
                line[j++] = 0;
                n++;
                i++;
                /* Try to find the start of the next word */
                while (i <= len && (line[i] == 0 || isspace(line[i])) ) {
                    i++;
                }
                i--;
                break;
            }
            line[j++] = line[i];
            break;
        case '\\':
            switch (line[i + 1]) {
            case '"':
            case '\'':
            case '\\':
                line[j++] = line[i + 1];
                break;
            case ' ':
                if (in_single_quotes || in_double_quotes) {
                    line[j++] = line[i];
                }
                line[j++] = line[i + 1];
                break;
            default:
                line[j++] = line[i];
                line[j++] = line[i + 1];
                break;
            }
            i++;
            break;
        default:
            line[j++] = line[i];
            break;
        }
    }

    args = (char **)malloc(sizeof(char *) * (n + 1) );
    n = 0;
    args[n++] = line;
    j--;

    for (i = 0; i < j; i++) {
        if (line[i] == 0) {
            args[n++] = line + i + 1;
        }
    }

    *argc = n;

    return args;
}





static int symbol_compare(const void *p1, const void *p2)
{
    const symbol *s1 = p1, *s2 = p2;

    return s2->address - s1->address;
}

void read_symbol_file(char *filename)
{
    char  buf[256];
    FILE *fp = fopen(filename,"r");

    if ( fp != NULL ) {
        while ( fgets(buf, sizeof(buf), fp) != NULL ) {
            int argc;
            char **argv = parse_words(buf,&argc);

            // Ignore
            if ( argc < 6 ) {
                free(argv);
                continue;
            }
            symbols = realloc(symbols, (symbols_num + 1) * sizeof(symbols[0]));
            symbols[symbols_num].name = strdup(argv[0]);
            symbols[symbols_num].file = strdup(argv[5]);
            symbols[symbols_num].address = strtol(argv[2] + 1, NULL, 16);
            symbols_num++;
            free(argv);
        }
    }
    qsort(symbols, symbols_num, sizeof(symbols[0]),symbol_compare);
}

static int bsearch_find(const void *key, const void *elem)
{
     int val = *(int *)key;
     const symbol *sym = elem;

     return sym->address - val;
}

const char *find_symbol(int addr)
{
    symbol *sym = bsearch(&addr, symbols, symbols_num, sizeof(symbols[0]), bsearch_find);
    return sym ? sym->name : NULL;
}


static int cmd_step(int argc, char **argv)
{
    debugger_active = 1;
    return 1;  /* We should exit the loop */
}

static int cmd_continue(int argc, char **argv)
{
    debugger_active = 0;
    return 1;
}

static int cmd_disassemble(int argc, char **argv)
{
    int   i = 0;
    int   where = pc;

    while ( i < 10 ) {
       where += disassemble(where);
       i++;
    }
    return 0;
}

static int cmd_registers(int argc, char **argv) 
{
    printf("pc\t%04x\t\tsp\t%04x\n", pc,sp);
    
    printf("a\t%02x\t\ta'\t%02x\n",a,a_);
    printf("hl\t%02x%02x\t\thl'\t%02x%02x\n", h, l, h_, l_);
    printf("de\t%02x%02x\t\tde'\t%02x%02x\n", d, e, d_, e_);
    printf("bc\t%02x%02x\t\tbc'\t%02x%02x\n", b, c, b_, c_);
    printf("ix\t%02x%02x\t\tiy\t%02x%02x\n", xh, xl, yh, yl);
    
    return 0;
}

static int cmd_break(int argc, char **argv)
{
    if ( argc == 1 ) {
        breakpoint *elem;
        int         i = 1;

        /* Just show the breakpoints */
        LL_FOREACH(breakpoints, elem) {
            if ( elem->type == BREAK_PC) {
                printf("%d:\tPC=%04x\n",i, elem->value);
            }
            i++;
        }
    } else if ( argc == 2 ) {
        char *end;
        breakpoint *elem;
        int value = strtol(argv[1], &end,0);

        if ( end != argv[1] ) {
            elem = malloc(sizeof(*elem));
            elem->type = BREAK_PC;
            elem->value = value;
            LL_APPEND(breakpoints, elem);
        } else {
            printf("Cannot break on '%s'\n",argv[1]);
        }
    }
    return 0;
}




