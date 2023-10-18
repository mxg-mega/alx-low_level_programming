#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - function prints the passed integers
 * @separator: character to separate the ints
 * @n: number of arguments
 *
 * Return: no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL || n == 0)
	{
		return;
	}
	va_start(args, n);

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d%s", va_arg(args, int), separator);
	}
	printf("%d\n", va_arg(args, int));
	va_end(args);
}
