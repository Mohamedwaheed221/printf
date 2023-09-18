#include "main.h"

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
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case'c':
					str[len++] = printf("%c", va_arg(args, int));
					break;
				case's':
					str[len++] = printf("%s", va_arg(args, char*));
					break;
				case'd':
					str[len++] = printf("%d", va_arg(args, int));
					break;
				case 'u':
					str[len++] = printf("%u", va_arg(args, unsigned int));
					break;
				case 'r':
					str[len++] = printf("%r", va_arg(args, int));
					break;
				case 'o':
					str[len++] = printf("%o", va_arg(args, int));
					break;
				case'i':
					str[len++] = printf("%i", va_arg(args, int));
					break;
				case'%':
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
