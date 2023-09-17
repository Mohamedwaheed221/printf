#include "main.h"
/**
 * _printf - function that print any argument
 * @format: char
 * i: int
 * len: length of string
 * str: array
 * Return: len
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int len = 0;
	char str[1000]0
		;
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
				case '%':
					str[len++] = putchar('%');
					break;
			}
			i++;
		}
		else
		{
			str[len++] = putchar(format(i++));
		}
	}
	va_end(args);
	return (len);
}
