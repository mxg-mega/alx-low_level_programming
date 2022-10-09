#include "main.h"
#include <stdio.h>
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
				putchar(' ');
				k--;
			}
			j = 0;
			while (j < i)
			{
				putchar('#');
				j++;
			}
			putchar('\n');
			i++;
	
		}
	}
}
int main(void)
{
	print_triangle(7);
	return 0;
}
