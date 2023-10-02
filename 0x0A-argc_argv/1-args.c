#include <stdio.h>

/**
  * main - entry point
  * @argc: number of arguments
  * @argv: array of argument
  * Return: Always 0
  */
int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
