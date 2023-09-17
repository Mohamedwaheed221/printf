#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
        int spacifier = 0;
        va_list args;
        va_start(args, format);
        while (*format != '\0')
        {
                if (*format == '%')
                {
                        format++;
                        switch (*format)
                        {
                                case 'c':
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
                        spacifier += putchar(*format);
                        format++;
                }
        }
        va_end(args);
        return (spacifier);
}

