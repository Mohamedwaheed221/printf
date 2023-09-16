#include <stdio.h>
#include "main.h"

/**
 * _printf - function to print any argument
 * @format: pointer to a string
 * i: input
 * Return: i
 */

int _printf(const char *format, ...)
{
	int i = 0;

	va_list args;

	va_start(args, format);

	while (*format)
	{
		if(*format == 'c')
		{
			i += printf("%c\n",va_arg(args, int));
