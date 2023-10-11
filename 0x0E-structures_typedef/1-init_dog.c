#include <stdio.h>
#include "dog.h"

/**
  * init_dog - initializes the struct dog variables
  * @d: declaration of struct d
  * @name: name of dog
  * @age: age of dog
  * @owner: name of dog owner
  *
  * Return: no return value
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
