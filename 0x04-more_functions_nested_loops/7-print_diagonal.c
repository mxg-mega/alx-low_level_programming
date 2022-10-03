#include "main.h"
#include <stdio.h>
/**
*print_diagonal - a function that prints a diagonal on the teminal
*@n: entered integer 
*Return: no return value
*/
void print_diagonal(int n)
{
	int i, s;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
	else
	{
		putchar('\n');
	}
}
int main(void)
{
	print_diagonal(5);
	return (0);
}
