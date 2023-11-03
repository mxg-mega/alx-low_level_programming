#include "main.h"
#include <string.h>

/**
  * create_file - creates a text file
  * @filename: name of text file
  * @text_content: content to append to file
  *
  * Return: return 1 if success and -1 if failure
  */
int create_file(const char *filename, char *text_content)
{
	int openfile;
	ssize_t filecontent;

	if (filename == NULL)
	{
		return (-1);
	}
	openfile = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (openfile == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		filecontent = write(openfile, text_content, strlen(text_content));
		if (filecontent == -1)
		{
			close(openfile);
			return (-1);
		}
	}
	close(openfile);
	return (1);
}

