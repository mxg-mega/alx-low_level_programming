#include "main.h"

/**
  * append_text_to_file - adds a text to a txt file
  * @filename: name of the file
  * @text_content: text to append
  *
  * Return: 1 and -1 for failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int openfile;
	ssize_t writefile;

	if (filename == NULL)
	{
		return (-1);
	}
	openfile = open(filename, O_RDWR | O_APPEND);
	if (openfile == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		writefile = write(openfile, text_content, strlen(text_content));
		if (writefile == -1)
		{
			close(openfile);
			return (-1);
		}
	}
	close(openfile);
	return (1);
}
