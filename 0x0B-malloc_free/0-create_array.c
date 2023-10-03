#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array by alloc memeory
  * @size: size of array
  * @c: element of array
  * Return: the created array
  */
char *create_array(unsigned int size, char c)
{
	char *new_array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	new_array = malloc(sizeof(char) * size);
	if (new_array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new_array[i] = c;
	}
	new_array[size] = '\0';
	return (new_array);
}
