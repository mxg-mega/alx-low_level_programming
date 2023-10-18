#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_number - function prints the passed integers
 * @separator: character to separate the ints
 * @n: number of arguments
 *
 * Return: no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d%s", va_arg(args, int), separator);
	}
	printf("%d\n", va_arg(args, int));
	va_end(args);
}
