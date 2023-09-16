<<<<<<< HEAD
#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - function that prints any type of arguments
 * @format: string
=======
#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - function that print any argument
 * @format: pointer to a string
>>>>>>> 4062355999eb34edaf2850eff395f42d8e4f57f8
 * i: input
 * Return: i
 */
int _printf(const char *format, ...)
{
<<<<<<< HEAD
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

=======
        int i = 0;

        va_list args;

        va_start(args, format);

        while (*format != '\0')
        {
                if (*format == 'c')
                {
                        i += putchar(va_arg(args, int));
                }
                else if (*format == 's')
                {
                        i += puts(va_arg(args, char*));
                }
                else
                {
                        i += putchar ('%');
                }
                format++;
        }
        va_end(args);

        return (i);
}
>>>>>>> 4062355999eb34edaf2850eff395f42d8e4f57f8
