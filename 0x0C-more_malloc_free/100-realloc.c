#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - this function
 * @ptr: a pointer
 * @old_size:
 * @new_size:
 *
 *Return: Nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size > old_size)
	{
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
		{
			return (NULL);
		}

		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < old_size && i < new_size)
	{
		new_ptr[i] = ((char *) ptr)[i];
		i++;
	}

	free(ptr);
	return (new_ptr);
}
