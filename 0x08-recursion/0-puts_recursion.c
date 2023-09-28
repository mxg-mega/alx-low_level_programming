#include <stdio.h>

/**
 * _puts_recursion - using recursion to print chars
 * @s: pointer to string
 *
 * Return: no return
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		_puts_recursion(s);
	}
}
