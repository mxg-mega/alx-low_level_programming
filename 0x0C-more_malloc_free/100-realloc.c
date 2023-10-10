#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _realloc
  * @ptr: pointer memory/array
  * @old_size: old memory size
  * @new_size: new memory size
  *
  * Return: a pointer to the new array
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_array;
	unsigned char *old, *new;
	unsigned int i;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	new_array = malloc(new_size);
	if (new_array == NULL)
	{
		return (NULL);
	}

	old = ptr;
	new = new_array;
	for (i = 0; i < old_size && i < new_size; i++)
	{
		new[i] = old[i];
	}

	free(ptr);
	return (new_array);
}
