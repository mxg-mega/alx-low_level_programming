#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_strdup - this function creates a memory location pointing to its argument
*@str: the string to be pointed to
*Return: a pointer to a character
*/
char *_strdup(char *str)
{
	char *dup;

	dup = malloc(sizeof(str));
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		dup[0] = str[0];
		return (dup);
	}

}
