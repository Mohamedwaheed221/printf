#include "main.h"
/**
 * _printf  - function that print any argument
 * @format: char
 * x: int
 * vfprintf - function that print argument
 * argx: pointer for the list
 * Description: function that return any argument
 * Return: x
 */
int _printf(const char *format, ...)
{
	int x;
	va_list argx;

	va_start(argx, format);

	x = vfprintf(stdout, format, argx);
	va_end(argx);
	return (x);
}

/**
* _printf - function that print any argument
* i: input
* @format: string
* len: length of string
* Str: string
* Description: function which prints any argument
* Return: len
* int _printf(const char *format, ...)
*{
*	int i = 0;
*	int len = 0;
*	char str[1024];
*	va_list args;
*	va_start(args, format);
*	while (format[i] != '\0')
*	{
*		if (format[i] == '%')
*		{
*			i++;
*			switch (format[i])
*			{
*				case'c':
*					str[len++] = printf("%c", va_arg(args, int));
*					break;
*				case's':
*					str[len++] = printf("%s", va_arg(args, char*));
*					break;
*				case'd':
*					str[len++] = printf("%d", va_arg(args, int));
*					break;
*				case 'u':
*					str[len++] = printf("%u", va_arg(args, unsigned int));
*					break;
*				case 'o':
*					str[len++] = printf("%o", va_arg(args, int));
*					break;
*				case'i':
*					str[len++] = printf("%i", va_arg(args, int));
*					break;
*				case'r':
*					str[len++] = printf("%d", va_arg(args, int));
*					break;
*				case'%':
*					str[len++] = putchar('%');
*					break;
*			}
*			i++;
*		}
*		else
*		{
*			str[len++] = putchar(format[i++]);
*		}
*	}
*	va_end(args);
*	return (len);
* }
*/
