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
 */
int puts(const char *c);
int _printf(const char *format, ...);
#endif
