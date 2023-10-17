#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that sum its arguments
 * @n: the arguments initializer
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i, x;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, unsigned int);
		sum += x;
	}

	va_end(args);
	return (sum);
}
