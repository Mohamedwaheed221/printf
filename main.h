#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
<<<<<<< HEAD
#include <unistd.h>
#include <stdlib.h>

=======
#include <stdlib.h>
#include <unistd.h>
>>>>>>> 4062355999eb34edaf2850eff395f42d8e4f57f8

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

