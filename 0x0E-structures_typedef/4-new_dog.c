#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * new_dog - functions creates a new instance of struct dog
  * @name: name of dog
  * @age: age of dog
  * @owner: name of new owner
  * Return: a pointer to the new instance
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}

	d->name = name;
	if (d->name == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;

	d->owner = owner;
	if (d->owner == NULL)
	{
		free(d->owner);
		free(d);
		return (NULL);
	}
	return (d);
}
