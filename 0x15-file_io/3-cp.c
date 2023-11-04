#include "main.h"

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

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
	char *buffer;
	int openfile1, openfile2, writefile2;
	ssize_t readfile1;

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
	buffer = malloc(sizeof(char) * BUFF_SIZE);
	if (buffer == NULL)
	{
		close(openfile1);
		close(openfile2);
		error(argv[2], 99);
	}
	readfile1 = read(openfile1, buffer, BUFF_SIZE);
	if (readfile1 == -1)
	{
		free(buffer);
		close(openfile1);
		close(openfile2);
		error(argv[1], 98);
	}
	writefile2 = write(openfile2, buffer, BUFF_SIZE);
	if (writefile2 == -1)
	{
		free(buffer);
		close(openfile1);
		close(openfile2);
		error(argv[2] ,99);
	}

	free(buffer);
	close_file(openfile1);
	close_file(openfile2);
	return (0);
}
