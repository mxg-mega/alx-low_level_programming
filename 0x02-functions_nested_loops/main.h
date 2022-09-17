#include <unistd.h>
int _putchar(char c);
void print_alphabet(void);
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

/**
*print_alphabet - function that prints alphabets
*
*Return: no return
*/
void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
}
