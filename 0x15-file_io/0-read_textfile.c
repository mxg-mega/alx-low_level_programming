#include "main.h"
#include <stdlib.h>

/**
  * read_textfile - reads a text file
  * @filename: name of file to read from
  * @letters: number of bytes to read
  *
  * Return: number of bytes read
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileopen;
	ssize_t file_read, count;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	fileopen = open(filename, O_RDWR);
	if (fileopen == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fileopen);
		return (0);
	}

	file_read = read(fileopen, buffer, letters);
	if (file_read == -1)
	{
		free(buffer);
		close(fileopen);
		return (0);
	}

	count = write(STDOUT_FILENO, buffer, file_read);
	if (count == -1 || count != file_read)
	{
		free(buffer);
		close(fileopen);
		return (0);
	}

	close(fileopen);
	free(buffer);
	return (file_read);
}
