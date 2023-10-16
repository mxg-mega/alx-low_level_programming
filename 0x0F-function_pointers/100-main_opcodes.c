#include <stdio.h>
#include <stdlib.h>

/**
 * printOpcodes - Print the opcodes of the main function
 * @numBytes: The number of bytes to print
 */
void printOpcodes(int numBytes)
{
	unsigned char *mainAddr = (unsigned char *)printOpcodes;
	int i;

	for (i = 0; i < numBytes; i++)
	{
		if (i > 0)
		{
			printf(" ");
		}
		printf("%02x", mainAddr[i]);
	}
	printf("\n");
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line arguments
 * Return: 0 on success, 1 on incorrect argument count, 2 on negative input
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int numBytes = atoi(argv[1]);

	if (numBytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	printOpcodes(numBytes);

	return (0);
}
