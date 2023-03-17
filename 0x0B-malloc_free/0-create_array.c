#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*create_array - this funtion creates an array
*@size: size of the array to be created
*@c: the
*Return: a pointer or NULL
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			str[i] = c;
		return (str);
	}
}
