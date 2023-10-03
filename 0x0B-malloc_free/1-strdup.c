#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _strdup - copies a string and return a pointer
  * @str: string to copy
  *Return: a pointer to a string
  */
char *_strdup(char *str)
{
	char *str_cpy;
	int i, j, len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	i = len + 1;
	str_cpy = malloc(sizeof(char) * i);
	if (str_cpy == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < len; j++)
	{
		str_cpy[j] = str[j];
	}
	str_cpy[j + 1] = '\0';
	return (str_cpy);
}
