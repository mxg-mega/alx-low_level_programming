#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of a given number of bytes
 * @argc: the number of arguments
 * @argv: the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (; num_bytes > 0; num_bytes--)
		printf("%02x", ((unsigned char *)main)[num_bytes]);
	printf("\n");
	return (0);
}

