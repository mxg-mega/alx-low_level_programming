#include "dog.h"
#include <stdio.h>

/**
  * print_dog - displays the properties of struct dog
  * @d: the variable of type dog
  * Return: no return
  */
void print_dog(struct dog *d)
{
	char *nil = "(nil)";
	char *name;

	if (d != NULL)
	{
		if (d->name != NULL)
		{
			name = d->name;
		}
		else
		{
			name = nil;
		}
		printf("Name: %s\nAge: %f\n", name, d->age);

		if (d->owner != NULL)
		{
			name = d->owner;
		}
		else
		{
			name = nil;
		}
		printf("Owner: %s\n", name);
	}
}
