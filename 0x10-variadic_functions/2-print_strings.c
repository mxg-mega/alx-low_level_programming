#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - prints strings with separators
 * @separator: the char to separate the strings
 * @n:number of arguments top bne expected
 *
 * Return: no return except fail
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *ele;
	unsigned int i;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		ele = va_arg(str, char*);
		if (ele == NULL)
		{
			ele = "(nil)";
		}
		printf("%s", ele);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}
