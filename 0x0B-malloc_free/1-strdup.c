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
	char *dup;
	int i, l;

	if (str == NULL)
	{
		return (NULL);
	}
	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	dup = malloc(sizeof(char) * (l + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
			dup[i] = str[i];
		dup[i] = '\0';
		return (dup);
	}
}
