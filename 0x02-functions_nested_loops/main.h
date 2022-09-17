#include <unistd.h>
int _putchar(char c);
/**
 *_putchar - writes the character c to stdout
 *@c: The character print
 *
 *Return: on succes 1
 *on error, -1 is returned and error is set appropraitely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
