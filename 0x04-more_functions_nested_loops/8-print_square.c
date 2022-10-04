#include "main.h"
#include <stdio.h>
/**
*print_square - a function that prints a square of a given size
*@size: size of the square
*
*Return: no return
*/
void print_square(int size)
{
	int i, j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			putchar('#');
			j++;
		}
		putchar('\n');
		i++;
	}
}
int main(void)
{
	print_square(2);
	print_square(10);
	return 0;
}
