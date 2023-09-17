#include "main.h"
/**
 * _printf - function that print any argument
 * @format: pointer to a string
 * spacifier: input
<<<<<<< HEAD
 * Ruturn: spacifier
=======
>>>>>>> a89637a66a368f40eb906573107e15e0f5af48ca
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
<<<<<<< HEAD
				case 'c':
				spacifier += putchar(va_arg(args, int));
				break;
				case 's':
				spacifier += puts(va_arg(args, char*));
				break;
				case '%':
				spacifier += putchar('%');
				break;
					spacifier += putchar(va_arg(args, int));
					break;
				case 's':
					spacifier += puts(va_arg(args, char*));
					break;
				case '%':
					spacifier += putchar('%');
					break;
			}
			format++;
		}
		else
		{
			format++;
			spacifier += putchar(*format);
=======
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
		}else{
			spacifier++;
			putchar(*format);
>>>>>>> a89637a66a368f40eb906573107e15e0f5af48ca
		}
		format++;
	}
	va_end(args);
	return (spacifier);
}
<<<<<<< HEAD
		}
		}
	va_end(args);
	return (spacifier);
}
=======
>>>>>>> a89637a66a368f40eb906573107e15e0f5af48ca
