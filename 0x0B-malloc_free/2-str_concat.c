#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
	int l1, l2;

	l1 = strlen(s1);
	l2 = strlen(s2);
	conc = malloc(sizeof(char) * (l1 + l2 + 1));
	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		conc = strcat(s1, s2);
		return (conc);
	}

}
