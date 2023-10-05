#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * str_concat - concatinates two strings
  * @s1: first string
  * @s2: second string
  * Return: pointer to array of the two strings
*/
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int len1, len2, tlen, i, j;

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	tlen = len1 + len2 + 1;
	new_str = malloc(sizeof(char) * tlen);
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		new_str[i] = s1[i];
	}
	new_str[len1 + 1] = ' ';
	for (j = 0; j < len2; j++)
	{
		new_str[i] = s2[j];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
