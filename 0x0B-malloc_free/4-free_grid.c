#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * free_grid - frees the memmory of a 2d array
  * @grid: array
  * @height: height of array;
  * Return: no return
  */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
