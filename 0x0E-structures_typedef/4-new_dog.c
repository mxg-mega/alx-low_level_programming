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
	dog_t new_dog;
	char *new_name;
	char *new_owner;
	int nlen, olen;
	unsigned int i, j;

	/*get the length of name and set to nlen*/
	i = 0;
	while (name[i] != '\0')
	{
		i++;
	}
	nlen = i;
	/*get the lenght of owner and set to olen*/
	j = 0;
	while (owner[j] != '\0')
	{
		j++;
	}
	olen = j;
	/*allocate a memory for the pointers to hold the copies of each name and owner*/
	new_name = malloc(sizeof(char) * nlen);
	new_owner = malloc(sizeof(char) * olen);
	if (new_name == NULL)
	{
		return (NULL);
	}
	else
	{
		/*copy name to new name*/
		int k;

		for (k = 0; name[k] != '\0'; k++)
			new_name[k] = name[k];
	}
	new_name[nlen + 1] = '\0';
	if (new_owner == NULL)
	{
		return (NULL);
	}
	else
	{
		/*copy owner to new owner*/
		int l;

		for (l = 0; owner[l] != '\0'; l++)
			new_owner[l] = owner[l];
	}
	new_owner[olen + 1] = '\0';
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

