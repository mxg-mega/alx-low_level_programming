#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _calloc - this function creates
  *		a memory of a particular size for an array
  * @nmemb: number of element
  * @size: size of array
  * Return: a void pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(sizeof(size) * nmemb);
	if (mem == NULL)
	{
		return (NULL);
	}

	return (mem);
}
