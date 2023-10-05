#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * alloc_grid - creates a two dimentional array
  * @width: width of array
  * @height: height of array
  * Return: a pointer to the created array
  */
int **alloc_grid(int width, int height)
{
	int **h_array;
	int i, j;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	h_array = malloc(sizeof(int) * height * width);
	if (h_array == NULL)
	{
		free(h_array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		int *w_array;

		for (j = 0; j < width; j++)
		{
			w_array[j] = 0;
		}
		h_array[i] = w_array;
	}
	return (h_array);
}
