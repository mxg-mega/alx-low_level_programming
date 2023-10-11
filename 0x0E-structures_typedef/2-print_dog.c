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
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", (d->name != NULL) ? d->name : nil, d->age, (d->owner != NULL) ? d->owner : nil);
	}
}
