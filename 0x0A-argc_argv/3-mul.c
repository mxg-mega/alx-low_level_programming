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
	int i;

	if(argc >= 3)
	{
		result = 1;
		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
