#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_char - Print a char.
 * @args: Argument list.
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Print an int.
 * @args: Argument list.
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Print a float.
 * @args: Argument list.
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Print a string.
 * @args: Argument list.
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - Print various data types based on a format string.
 * @format: A format string indicating data types.
 * @...: Variable number of arguments corresponding to the format.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;

	specifier_t specs[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	i = 0;
	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == specs[j].spe)
			{
				specs[j].f(args);
				if (format[i + 1])
				{
					printf(", ");
					break;
				}
				j++;
			}
			i++;
		}
`
	printf("\n");
	va_end(args);
}

