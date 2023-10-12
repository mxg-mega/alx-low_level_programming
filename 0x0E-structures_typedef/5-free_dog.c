#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - frees the memory from new_dog
  * @d: memory to be freed
  * Return: no return value
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
