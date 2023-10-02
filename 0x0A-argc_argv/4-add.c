#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  * is_int - checks if parameter is an int
  * @c: parameter
  * Return: 0 if true and 1 if false
  */
int is_int(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] < '0' || c[i] > '9')
		{
			return (0);
		}
	}
	return (1);
}

/**
  * main - function adds it arguments
  * @argc: number of arguments
  * @argv: array of arguments
  * Return: sum of arguments
  */
int main(int argc, char **argv)
{
	int sum, i;

	sum = 0;
	if (argc != 1)
	{
		for (i = 1; i < argc; i++)
		{
			int check;

			check = is_int(argv[i]);
			if (check == 1)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
