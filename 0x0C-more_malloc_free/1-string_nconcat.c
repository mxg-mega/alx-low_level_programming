#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*string_nconcat - this function adds a string and the first n num of the second string
*@s1: first string array
*@s2: second string array
*@n: number of memory to be copied
*
*Return: returns a string array on success
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, len1, len2;

	len1 = 0;
	while (s1 && s1[len1])
	{
		len1++;
	}

	len2 = 0;
	while (s2 && s2[len2])
	{
		len2++;
	}
	if (n < len2)
	{
		s = malloc(sizeof(char) * (len1 + n + 1));
	}
	else
	{
		s = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	if (s == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
	{
		s[i++] = s2[j++];
	}

	j = 0;
	while (n >= len2 && i < (len1 + len2))
	{
		s[i++] = s2[j++];
	}
	s[i] = '\0';
	return (s);
}
