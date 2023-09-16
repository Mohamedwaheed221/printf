#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/***/

typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int putchar(char c);
int puts(const char *str)
int _printf(const char *format, ...);
int print_chr(va_list arguments, char *buf, unsigned int ibuf);

#endif
