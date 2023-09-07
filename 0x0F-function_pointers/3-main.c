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
int main(int __attribute__((__unused__)) argc, char **argv)
{
	int num1, num2;
	int result;
	char *operator;

	if (argc < 3)
	{
		printf("Error\n");
		exit (98);
	}
	
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' && num2 == 0) || (*operator == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(operator)(num1, num2);

	printf("%d\n", result);
	return (0);
}

