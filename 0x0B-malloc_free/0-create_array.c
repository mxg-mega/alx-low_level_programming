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

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL || isalpha(c))
	{
		return (NULL);
	}
	else
	{
		str[0] = c;
		return (str);
	}
}
