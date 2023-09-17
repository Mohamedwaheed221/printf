#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _printf - function that prints any argument
 * puts - function to print char
 * @format: const char
 *
 * Return: a data type value
 */

int _printf(const char *format, ...);
int puts(const char*str);


#endif
