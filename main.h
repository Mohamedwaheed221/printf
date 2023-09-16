#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>


/**
 * struct print - struct for printer functions
 * puts - a function that print a char
 * _printf - a function that prints alot of data types
 * @type_arg: identifier
 * @f: pointer to a printer functions
 * _printf - a function that printsdata types
 *
 * Description: struct that stores pointers to a
 * printer function
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
}print_t;

int puts(const char *str);
int _printf(const char *format, ...);
int print_chr(va_list arguments, char *buf, unsigned int ibuf);

#endif

