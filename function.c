#include"main.h"

/**print char (c)**/

/**
 * print_char - prints a char
 * @types: List a of arguments
 * @types: List a of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: Width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */

int print_char(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (handel_write_char(c, buffer, flags, width, precision, size));
}
