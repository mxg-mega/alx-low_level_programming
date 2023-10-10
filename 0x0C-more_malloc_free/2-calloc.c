#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _calloc - this function creates a memory of a particular size for an array
  * @nmemb: number of element
  * @size: size of array
  * Return: a void pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	unsigned char *array_set;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(size * nmemb);
	if (mem == NULL)
	{
		return (NULL);
	}

	array_set = mem;
	for (i = 0; i < nmemb; i++)
	{
		array_set[i] = 0;
	}

	return (array_set);
}
