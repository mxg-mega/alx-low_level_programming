#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * malloc_checked - allocates memory using malloc
  * @b: amount of memory
  * Return: Pointer to allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *n_mem;

	n_mem = malloc(b);
	if (n_mem == NULL)
	{
		exit(98);
	}
	return (n_mem);
}

