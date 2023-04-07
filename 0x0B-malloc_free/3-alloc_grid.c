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
	int **mee;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	mee = malloc(sizeof(int *) * height);
	if (mee == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		mee[x] = malloc(sizeof(int) * width);
		if (mee[x] == NULL)
		{
			for (; x >= 0; x--)
			{
				free(mee[x]);
			}
			free(mee);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			mee[x][y] = 0;
	}
	return (mee);
}
