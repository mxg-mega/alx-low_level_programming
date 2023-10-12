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
	unsigned int i, namel, ownerl;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	d = malloc(sizeof(d));
	if (d == NULL)
	{
		return (NULL);
	}
	for (namel = 0; name[namel]; namel++)
		;
	namel++;
	d->name = malloc(sizeof(char) * namel);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i < namel; i++)
	{
		d->name[i] = name[i];
	}
	d->age = age;
	for (ownerl = 0; owner[ownerl]; ownerl++)
		;
	ownerl++;
	d->owner = malloc(sizeof(char) * ownerl);
	if (d->owner == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i < ownerl; i++)
	{
		d->owner[i] = owner[i];
	}
	return (d);
}
