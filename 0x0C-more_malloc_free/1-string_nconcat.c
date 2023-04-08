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
	int s1Count, s2Count;

	s1Count = 0;
	/*Gettint the amount of char in s1*/
	while (s1[s1Count] != '\0')
	{
		s1Count++;
	}
	s2Count = 0;
	while (s2[s2Count] != '\0')
	{
		/*getting s2 count*/
		s2Count++;
	}
	/*creating a string to hold the two strings*/
	char *nString;

	nString = malloc(sizeof(char) * (s1Count + n + 2));
	if (nString == NULL)
	{
		/*if fail it returns null*/
		return (NULL);
	}
	else if (s1 == NULL)
	{
		/*return empty string if s1 is null*/
		return (nString);
	}
	else
	{
		int j, s;

		j = 0;
		while(j <= s1Count)
		{
			/*adding s1 into nString*/
			nString[j] = s1[j];
			j++;
		}
		/*adding a space between the strings*/
		s = j + 1;
		nString[s] = ' ';
		/*if lenght of n is greater than or equal to s2 lenght*/
		if (n >= s2Count)
		{
			int k;

			for (k = 0; s2[k] != '\0'; k++)
			{
				/*add all of s2*/
				nString[s + k] = s2[k];
			}
			/*terminate the string*/
			nString[s + k + 1] = '\0';
			/*return nString*/
			return (nString);
		}
		else
		{
			/*else if n is less than s2 count*/
			int l;

			for (l = 0; l < n; l++)
			{
				/*add n amount of s2 memory*/
				nString[s + l] = s[l];
			}
			/*terminate the string*/
			nString[s + l + 1] = '\0';
			/*return the string*/
			return (nString);
		}
	}
}
