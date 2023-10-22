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
	char *separator = "";

	va_start(args, format);
	while (format && *format)
	{
		if (*format == 'c')
		{
			printf("%s%c", separator, va_arg(args, int));
		}
		else if (*format == 'i')
		{
			printf("%s%d", separator, va_arg(args, int));
		}
		else if (*format == 'f')
		{
			printf("%s%f", separator, (float)va_arg(args, double));
		}
		else if (*format == 's')
		{
			char *str;

			str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("%s(nil)", separator);
			}
			else
			{
				printf("%s%s", separator, str);
			}
		}
		separator = ", ";
		format++;
	}

	printf("\n");
	va_end(args);
}
