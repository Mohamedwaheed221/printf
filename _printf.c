#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

int _printf(const char *format, ...)
{
    int spac = 0;
    va_list arg;
    va_start (arg, format);

    while(*format)
    {
    	if(*format == '%')
        {
        	format++;// to move after the %
	  	if(*format == 'c')
        	{
			spac++;
            		printf("%c\n",va_arg(arg, int));
        	}
        	else if(*format == 's')
        	{
            		spac += printf("%s\n", va_arg(arg, char*));
        	}
        	else if (*format == 'd')
        	{
            		spac += printf("%d", va_arg(arg, int));
        	}
        	else if(*format == "%")
        	{
            		spac++;
			printf("%%");
        	}
        }else{
		spac++;
		putchar(*format);
	}
	format++; 
    }
    
    va_end (arg);

    return spac;
}
