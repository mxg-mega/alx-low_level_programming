#include <stdio.h>
#include <stdlib.h>

/**
  * main - entry point
  * @argc: number of arguments
  * @argv: array of arguments
  * Return: Always 0
  */
int main(int argc, char **argv)
{
	unsigned int result;
	int num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
	}
	return (0);
}
