#include "main.h"
/**
 * _printf - function that print any argument
 * @format: pointer to a string
 * i: input
 * Return: i
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;
	va_start(args, format);
	while (*format){
		if (*format == '%'){
			format++;
			if (*format == 'c')
			{
			i++;
			putchar(va_arg(args, int));
			}
			else if (*format == 's')
			{
				i += puts(va_arg(args, char*));
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
