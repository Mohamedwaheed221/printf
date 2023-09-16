#ifndef MAIN_H
#define MAIN_H



/**
 * struct print - struct for printer functions
 * puts - a function that print a char
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */

typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int puts(const char *str)
int _printf(const char *format, ...);
int print_chr(va_list arguments, char *buf, unsigned int ibuf);

#endif
