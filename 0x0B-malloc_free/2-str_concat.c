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
	int l1, l2, i;

	l1 = strlen(s1);
	l2 = strlen(s2);
	conc = malloc(sizeof(char) * (l1 + l2 + 1));
	if (s1 == NULL || s2 == NULL)
	{
		if (s1 == NULL)
		{
			for (i = 0; i < l2; i++)
				conc[i] = s2[i];
			conc[strlen(conc) + 1] = '\0';
			return (conc);
		}
		else if (s2 == NULL)
		{
			for (i = 0; i < l1; i++)
				conc[i] = s1[i];
			conc[strlen(conc) + 1] = '\0';
			return (conc);
		}
		else
		{
			return (NULL);
		}
	}
	else
	{
		for (i = 0; i < l1; i++)
		{
			conc[i] = s1[i];
		}
		conc[l1 + 1] = ' ';
		for (i = 0; i  < l2; i++)
		{
			conc[l1 + i] = s2[i];
		}
		conc[l1 + l2 + 1] = '\0';
		return (conc);
	}
}
