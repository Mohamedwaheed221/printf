#include "main.h"
/**
 * _printf - function that print any argument
 * @format: pointer to a string
 * spacifier: input
<<<<<<< HEAD
 * Ruturn: spacifier
=======
 * Return: spacifier
>>>>>>> f5cc4613f00e2e9a3113bf60a823154a567c064c
 */

int _printf(const char *format, ...)
{
	int spacifier = 0;
	va_list args;
	va_start(args, format);
<<<<<<< HEAD
	while(*format)
=======
	while (*format)
>>>>>>> f5cc4613f00e2e9a3113bf60a823154a567c064c
	{
		if(*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
<<<<<<< HEAD
				spacifier += putchar(va_arg(args, int));
				break;
				case 's':
				spacifier += puts(va_arg(args, char*));
				break;
				case '%':
				spacifier += putchar('%');
				break;
=======
					spacifier += putchar(va_arg(args, int));
					break;
				case 's':
					spacifier += puts(va_arg(args, char*));
					break;
				case '%':
					spacifier += putchar('%');
					break;
>>>>>>> f5cc4613f00e2e9a3113bf60a823154a567c064c
			}
			format++;
		}
		else
		{
			format++;
			spacifier += putchar(*format);
<<<<<<< HEAD
		}
	}
	va_end(args);
	return (spacifier);
}
=======
		}
		}
	va_end(args);
	return (spacifier);
}		
>>>>>>> f5cc4613f00e2e9a3113bf60a823154a567c064c
