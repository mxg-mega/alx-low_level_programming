#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  * main - Entry point
  * @argv: argument parameter
  * @argc: argument count
  *
  * Return: Always 0
  */
int main(int argc, char **argv)
{
	int a, b;
	int result;
	char *operator;

	if (argc < 3)
	{
		printf("Error1\n");
		exit (98);
	}
	if (argv[2] == NULL)
	{
		printf("Error2\n");
		exit (99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operator = argv[2];
	result = (*get_op_func)(operator)(a, b);
	printf("%d\n", result);
	return (0);
}

