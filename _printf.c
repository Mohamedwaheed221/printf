#include "main.h"
<<<<<<< HEAD

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
=======
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
>>>>>>> 32d7bef97e8b9b35cb882362692c457c64d969bb
	{
		if (format[i] != '%')
		{
<<<<<<< HEAD
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			/* write(1, &format[i], 1);*/
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			printed = handle_print(format, &i, list, buffer,
				flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
=======
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
>>>>>>> 32d7bef97e8b9b35cb882362692c457c64d969bb
		}
	}

	print_buffer(buffer, &buff_ind);

	va_end(list);

	return (printed_chars);
}

/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}
