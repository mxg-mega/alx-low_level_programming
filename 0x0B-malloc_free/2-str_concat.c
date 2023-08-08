#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
*str_concat - this function concatenates two strings
*@s1: first string
*@s2: second string
*
*Return: NULL if failed or NULL argument and a pointer to a string if Success
*/
char *str_concat(char *s1, char *s2)
{
	char *conc;
	unsigned int l1, l2, i;

	if (l1 == NULL)
	{
		l1 = "";
	}
	if (l2 == NULL)
	{
		l2 = "";
	}
	l1 = strlen(s1);
	l2 = strlen(s2);
	conc = malloc(sizeof(char) * (l1 + l2 + 1));
	if (conc == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < l1; i++)
		{
			conc[i] = s1[i];
		}
		for (i = 0; i < l2; i++)
		{
			conc[l1 + i] = s2[i];
		}
		conc[l1 + l2 + 1] = '\0';
		return (conc);
	}
}
