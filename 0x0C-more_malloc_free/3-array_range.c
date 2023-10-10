#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * array_range - function creates an array of number between a range
  * @min: minimum number
  * @max: maximum number
  * Return: a pointer to the created array
  */
int *array_range(int min, int max)
{
	int *ptr;
	int len, i;

	if (min > max)
	{
		return (NULL);
	}

	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
	{
		return (NULL);
	}

	i = 0;
	for (; min <= max; min++)
	{
		ptr[i] = min;
		i++;
	}
	return (ptr);
}
