#include <unistd.h>

/**
  *_putchar - writes the charcter c to the stdout
  *@c: The character to print
  *
  *Return: on success 1.
  *On error, -1 is returned, and error is set appropraitely.
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
