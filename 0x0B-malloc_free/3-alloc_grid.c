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

	if (height == 0 || width == 0)
	{
		return (NULL);
	}
	h_array = (int **)malloc(sizeof(int *) * height);
	if (h_array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		h_array[i] = (int *)malloc(sizeof(int) * width);
		if (h_array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(h_array[i]);
			}
			free(h_array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			h_array[i][j] = 0;
		}
	}
	return (h_array);
}
