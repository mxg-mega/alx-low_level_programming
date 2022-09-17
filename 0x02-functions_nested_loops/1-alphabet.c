#include <stdio.h>
#include "main.h"
/**
*print_alphabet - function
*Return: no return
*/
void print_alphabet(void)
{
	for(int a = 97; a <= 122; a++)
	{
		_putchar(a);
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
