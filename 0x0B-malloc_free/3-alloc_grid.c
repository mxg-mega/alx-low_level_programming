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

	td_array = malloc(sizeof(int) * height);
	if (td_array == NULL)
	{
		free(td_array);
		return (NULL);
	}
	else if (width <= 0 || height <= 0)
	{
		free(td_array);
		return (NULL);
	}
	else
	{
		int j, k;

		for (j = 0; j < height; j++)
		{
			for (k = 0; k < width; k++)
			{
				td_array[j][k] = malloc(sizeof(int) * width);
				td_array[j][k] = 0;
			}
		}
		return (td_array);
	}
}
