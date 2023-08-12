#include <stdio.h>
#include "dog.h"

/**
  * init_dog - a function that initializes a struct
  * @name: a pointer to a string
  * @d: the structuure
  * @age: pointer to an int
  * @owner: pointer to a string
  *
  * Return: no return except if malloc fails
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}

