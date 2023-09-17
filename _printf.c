#include "main.h"
/**
 * _printf - function that print any argument
 * @format: pointer to a string
 * spacifier: input
 * Return: spacifier
 */
int _printf(const char *format, ...)
{
	int spacifier = 0;
	va_list args;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					specifier += putchar(va_arg(args, int));
					break;
				case 's':
					specifier += puts(va_arg(args, char*));
					break;
				case '%':
					specifier += putchar('%');
					break;
			}
			format++;
		}
		else
		{
			specifier += putchar(*format);
			format++;
		}
	}
	va_end(args);
	return (specifier);
}
