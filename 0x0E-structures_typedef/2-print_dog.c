#include "dog.h"
#include <stdio.h>

/**
  * print_dog - displays the properties of struct dog
  * @d: the variable of type dog
  * Return: no return
  */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
