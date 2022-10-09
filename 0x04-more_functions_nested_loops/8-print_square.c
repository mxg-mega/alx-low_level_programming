#include "main.h"
/**
*print_square - a function that prints a square of a given size
*@size: size of the square
*
*Return: no return
*/
void print_square(int size)
{
	int i, j;

	if (size > 0 && size != 0)
	{
		i = 0;
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
