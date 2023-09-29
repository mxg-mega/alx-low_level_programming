#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - using recursion to print chars
 * @s: pointer to string
 *
 * Return: no return
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
