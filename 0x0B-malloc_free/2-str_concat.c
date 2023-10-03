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
	if (s1 == NULL)
	{
		len1 = 1;
	}
	else
	{
		while (s1[len1] != '\0')
		{
			len1++;
		}
	}
	len2 = 0;
	if (s2 == NULL)
	{
		len2 = 1;
	}
	else
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}
	tlen = len1 + len2 + 2;
	new_str = malloc(sizeof(char) * tlen);
	if (new_str == NULL)
	{
		return (NULL);
	}
	return (new_str);
}
