#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Print various data types with a separator.
 * @format: A format string indicating data types.
 * @...: Variable number of arguments corresponding to the format.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *format_copy = format;
	char *separator = "";
	int printed = 0;

	va_start(args, format);

    while (format_copy && *format_copy)
    {
        if (*format_copy == 'c')
        {
            printf("%s%c", separator, va_arg(args, int));
            printed = 1;
        }
        else if (*format_copy == 'i')
        {
            printf("%s%d", separator, va_arg(args, int));
            printed = 1;
        }
        else if (*format_copy == 'f')
        {
            printf("%s%f", separator, (float)va_arg(args, double));
            printed = 1;
        }
        else if (*format_copy == 's')
        {
            char *str = va_arg(args, char *);
            if (str == NULL)
            {
                printf("%s(nil)", separator);
            }
            else
            {
                printf("%s%s", separator, str);
            }
            printed = 1;
        }

        if (printed)
        {
            separator = ", ";
            printed = 0;
        }

        format_copy++;
    }
	printf("\n");
	va_end(args);
}
