#include <stdio.h>
#include "main.h"

/**
  * main - entry point
  * @argc: number of arguments
  * @argv: array of arguments
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", *argv);
	return (0);
}
