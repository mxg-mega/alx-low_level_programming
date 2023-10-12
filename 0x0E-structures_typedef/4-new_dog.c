#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * copy - copies the data
  * @src: origin
  * @dest: destination
  * Return: pointer to copy
  */
char *copy(char *src, char *dest)
{
	int len, i;

	len = 0;
	while (src[len])
	{
		len++;
	}
	len++;
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	return (src);
}

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
	unsigned int namel, ownerl;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	namel = 0;
	while (name[namel])
	{
		namel++;
	}
	namel++;
	d->name = malloc(sizeof(char) * namel);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	copy(name, d->name);
	d->age = age;
	for (ownerl = 0; owner[ownerl]; ownerl++)
		;

	ownerl++;
	d->owner = malloc(sizeof(char) * ownerl);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	copy(owner, d->owner);
	return (d);
}
