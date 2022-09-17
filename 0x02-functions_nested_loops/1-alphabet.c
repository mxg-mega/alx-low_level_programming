#include <stdio.h>
#include "main.h"
void print_alphabet(void);
/**
*print_alphabet - function
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
/**
*main - Entry point
*Return: 0
*/
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
