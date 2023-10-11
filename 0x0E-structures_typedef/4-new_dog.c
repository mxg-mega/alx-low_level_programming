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
	char *n, *o;

	if (name == NULL)
	{
		name = "";
	}
	if (owner == NULL)
	{
		owner = "";
	}
	n = name;
	o = owner;
	d = malloc(sizeof(d));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = n;
	d->age = age;
	d->owner = o;
	return (d);
}
