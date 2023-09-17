#include "main.h"
/**
 * _printf - function that prints any argument
 * @format: sting
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
			if (*format == 'c')
			{
				spacifier++;
				printf("%c", va_arg(args, int));
			}
			else if (*format == 's')
			{
				spacifier += printf("%s", va_arg(args, char*));
			}
			else if (*format == '%')
			{
				spacifier++;
				putchar('%');
			}
		}
			else
			{
				spacifier++;
				putchar(*format);
			}
			spacifier++;
		}
	va_end(args);
	return (spacifier);
}
