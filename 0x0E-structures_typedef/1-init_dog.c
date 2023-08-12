#include <stdio.h>
#include "main.h"
#include "dog.h"

/**
 * init_dog - a function that initializes a struct
 * @name: a pointer to a string
 * @struct dog d: the structuure
 * @age: pointer to an int
 * @owner: pointer to a string
 *
 * Return: no return except if malloc fails
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *initializer;

	initializer = &d;

	initializer->name = name;
	initializer->age = age;
	initializer->owner = owner;
}
