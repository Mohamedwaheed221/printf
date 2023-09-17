#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
    int i = 0;
    va_list args;
    va_start (args, format);

    while(*format != '\0')
    {
        if(*format == 'c')
        {
            i += putchar(va_arg(args, int));
        }
        else if(*format == 's')
        {
            i += puts(va_arg(args, char*));
        }
        else
        {
            i += putchar('%');
        }
          format++;
    }
    va_end (args);

    return i;
}


