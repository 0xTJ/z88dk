/* io.c */
extern int getint(unsigned char *addr, int len);
extern void putint(int i, char *addr, int len);
extern int symname(char *sname);
extern int getlabel(void);
extern void printlabel(int label);
extern void postlabel(int label);
extern int alpha(char c);
extern int numeric(char c);
extern int an(char c);
extern void pl(char *str);
extern void setstage(char **before, char **start);
extern void clearstage(char *before, char *start);
extern void fabort(void);
extern void toconsole(void);
extern void tofile(void);
extern int outbyte(char c);
extern int outstage(char c);
extern void outstr(char ptr[]);
extern void nl(void);
extern void tab(void);
extern void col(void);
extern void bell(void);
extern void ol(char *ptr);
extern void ot(char *ptr);
extern void blanks(void);
extern void outdec(int number);
extern void outd2(int n);
extern char raise(char c);
extern void queuelabel(int);
