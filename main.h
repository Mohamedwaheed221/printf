#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
 * _printf - function that prints any argument
 * puts: function that print a string
 * @str: string
 * @format: const char
 */
int puts(const char *str);
int _printf(const char *format, ...);
#endif
