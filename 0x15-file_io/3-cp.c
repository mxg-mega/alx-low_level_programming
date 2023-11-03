#include "main.h"

/**
  * error - function handles error messages
  * @filename: the error message
  * @status: the exit status
  * Return: no return
  */
void error(char *filename, int status)
{
	if (filename != NULL)
	{
		switch (status)
		{
			case 98:
			{
				dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
				break;
			}
			case 99:
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
				break;
			}
		}
	}
	exit(status);
}

/**
  * main - copies a file from a path to another
  * @argc: number of arguments
  * @argv: arguments array
  *
  * Return: 0 except if failure exit with 98
  */
int main(int argc, char **argv)
{
	char buffer[1024];
	int openfile1, openfile2, closefile1, closefile2;
	ssize_t writefile2, readfile1;

	if (argc != 3)
	{
		error(NULL, 97);
	}
	openfile1 = open(argv[1], O_RDONLY);
	if (openfile1 == -1)
	{
		error(argv[1], 98);
	}

	openfile2 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (openfile2 == -1)
	{
		error(argv[2], 99);
	}
	readfile1 = read(openfile1, buffer, sizeof(buffer));
	if (readfile1 == -1)
	{
		error(argv[1], 98);
	}
	writefile2 = dprintf(openfile2, "%s", buffer);
	if (writefile2 == -1)
	{
		close(openfile1);
		close(openfile2);
		error(argv[2], 99);
	}
	closefile1 = close(openfile1);
	closefile2 = close(openfile2);
	if (closefile1 == -1 || closefile2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd \n");
		exit(100);
	}
	return (0);
}
