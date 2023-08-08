#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/** 
  * array_range - this funtion creates an array and contains all value from min to max
  * @min: minimum int
  * @max: maximum int
  *
  * Return: pointer to array
  */
int *array_range(int min, int max)
{
	int len = 0, i = 0;
	
	len = max - min + 1;

	int *arrayPtr;

	if (min > max)
	{
		return (NULL);
	}

	arrayPtr = malloc(sizeof(int) * len);

	if (arrayPtr == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		arrayPtr[i] = min;
		min++;
		i++;
	}

	return (arrayPtr);

}
