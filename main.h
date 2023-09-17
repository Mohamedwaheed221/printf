#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

/**
<<<<<<< HEAD
 * _printf - function that prints any argument
=======
 * _printf - printf function
>>>>>>> 557c5632125647bd227e6e9f67f762f67c7fa880
 * puts - function to print char
 * _putchar - putchar function
 * @format: const char
 *
<<<<<<< HEAD
 * Return: a data type value
 */

int _printf(const char *format, ...);
int puts(const char*str);
=======
 * Return: a datatype value.
 */

int _printf(const char *format, ...);
int puts(const char *str);
int putchar(char c);

>>>>>>> 557c5632125647bd227e6e9f67f762f67c7fa880

#endif
