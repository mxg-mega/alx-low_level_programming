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
	size_t i;
	unsigned int *array;

	array = malloc(sizeof(size) * nmemb);
	if (array == NULL)
	{
		return (NULL);
	}
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * sizeof(size)); i++)
	{
		array[i] = 0;
	}
	return (array);
}
