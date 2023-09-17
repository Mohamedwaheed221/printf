#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf  - function that print any argument
 * @format: char
 * i: int
 * len: length of string
 * str: array
 * Return: len
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int len = 0;
	char str[1024];
	va_list args;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					str[len++] = putchar(va_arg(args, int));
					break;
				case 's':
					str[len++] = puts(va_arg(args, char*));
					break;
				case'd':
					str[len++] = putchar(va_arg(args, int));
					break;
				case '%':
					str[len++] = putchar('%');
					break;
			}
			i++;
		}
		else
		{
			str[len++] = putchar(format[i++]);
		}
	}
	va_end(args);
	return (len);
}
