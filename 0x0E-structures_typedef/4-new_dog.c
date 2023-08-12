#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - is a function that creates a new dog struct
 * @name: the name
 * @age: an int
 * @owner: a string
 *
 * Return: a struct of dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}

