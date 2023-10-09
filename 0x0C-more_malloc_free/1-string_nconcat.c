#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * string_nconcat - function concatenates two strings
  * @s1: first string
  * @s2: second string
  * @n: amount of bytes of s2 concatenated to s1
  * Return: a pointer to a string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1, len2, mem, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
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
	if (n > len2)
	{
		n = len2;
	}
	mem = len1 + n + 1;
	str = malloc(sizeof(char) * mem);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[mem] = '\0';
	return (str);
}
