#include "dog.h"
#include <stdio.h>

/**
  * print_dog - displays the properties of struct dog
  * @d: the variable of type dog
  * Return: no return
  */
void print_dog(struct dog *d)
{
	struct dog dog_n;

	dog_n.name = d->name;
	dog_n.age = d->age;
	dog_n.owner = d->owner;
	printf("Name: %s\nAge: %f\nOwner: %s\n", dog_n.name, dog_n.age, dog_n.owner);
}
