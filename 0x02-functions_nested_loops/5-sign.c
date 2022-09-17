#include "main.h"
/**
  *print_sign - function that prints the sign of an integer
  *@n: the number to analyse
  *
  *Return: 0 And print 0 if n = 0 else -1
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
