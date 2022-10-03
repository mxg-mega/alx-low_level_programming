#include "main.h"
/**
 * print_line - function that prints a charachter a nu,ber of times
 * @n: the number of times
 *
 * Return: no return
 */
void print_line(int n)
{
	int i, j;

	i = 0;
	while (i < n)
	{
		if (n <= 0)
		{
			break;
		}
		_putchar('_');
		i++
	}
	_putchar('\n');
}
