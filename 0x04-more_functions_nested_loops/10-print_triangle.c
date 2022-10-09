#include "main.h"
/**
 *print_triangle - function prints a triangle
 *@size: size of the triangle
 *
 *Return: no return value
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size >= 1)
	{
		i = 1;
		while (i <= size)
		{
			k = size;
			while (k > i)
			{
				_putchar(' ');
				k--;
			}
			j = 0;
			while (j < i)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
	
		}
	}
}
