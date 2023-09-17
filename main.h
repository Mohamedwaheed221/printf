#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _printf - printf function
 * puts - function to print char
 * _putchar - putchar function
 * @format: const char
 *
 * Return: a datatype value.
 */

int _printf(const char *format, ...);
int puts(const char *str);
int putchar(char c);


#endif
