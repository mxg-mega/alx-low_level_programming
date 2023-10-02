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
	unsigned int num1, num2;

	if(argc > 2 && argc <= 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
