#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - function that prints any type of arguments
 * @format: string
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
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
			i++;
			i = printf("%c", va_arg(args, int));
			}
			else if (*format == 's')
			{
				i += printf("%s", va_arg(args, char*));
			}
			else if (*format == 'd')
			{
				i += printf("%d", va_arg(args, int));
			}
			else if (*format == '%')
			{
				i++;
				putchar('%');
			}
		}
		else
		{
			i++;
			putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (i);
}

