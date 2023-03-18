#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*alloc_grid - this funtion return a pointer to a two dimensional int array
*@width: size of the width of array
*@height: size of array height
*
*Return: return a pointer to a two dimensional array or NULL if failure
*/
int **alloc_grid(int width, int height)
{
	int **td_array;
	unsigned int size;

	size = width * height;
	td_array = malloc(sizeof(int) * (size));
	if (td_array == NULL || width < 1 || height < 1)
	{
		free();
		return (NULL);
	}
	else
	{
		int i, j;

		for (i = 0; i < width; i++)
		{
			td_array[i] = 0;
			for (j = 0; j < height; j++)
			{
				td_array[i][j] = 0;
			}
		}
		return (td_array);
	}
}