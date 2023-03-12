#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*_strdup - this function creates a memory location pointing to its argument
*@str: the string to be pointed to
*Return: a pointer to a character
*/
char *_strdup(char *str)
{
	char dpl[];
	char *dup;
	int i, l;

	l = strlen(str);
	dup = malloc(sizeof(char) * l);
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < l; i++)
			dpl[i] = str[i];
		dup = dpl;
		return (dup);
	}

}
