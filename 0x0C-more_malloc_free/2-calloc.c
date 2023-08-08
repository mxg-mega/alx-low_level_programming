#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
*_calloc - this function allocates memory for an array using malloc
*@nmemb: elements for allocation
*@size: size of memory to allocate
*Return - no return value
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, l = 0;
	char *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	l = size * nmemb;
	array = malloc(l);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l; i++)
	{
		array[i] = 0;
	}

	return (array);
}
