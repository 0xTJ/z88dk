#ifndef _T_STDIO_H
#define _T_STDIO_H

extern int __LIB__ t_printf(unsigned char *fmt, ...);
extern int __LIB__ t_scanf(unsigned char *fmt, ...);

extern int __LIB__ t_sprintf(char *s, unsigned char *fmt,...);
extern int __LIB__ t_snprintf(char *s, unsigned int size, unsigned char *fmt,...);
extern int __LIB__ t_asprintf(char **s, unsigned char *fmt, ...);
extern int __LIB__ t_sscanf(char *s, unsigned char *fmt, ...);

#endif
