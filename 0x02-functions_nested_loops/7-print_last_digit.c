#include "main.h"
/**
  *print_last_digit - function determines last digit of a number
  *@n: last digit
  *
  *Return:l value of the last digit of n
  */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if ((l >= '0') && (l <= '9'))
	{
		_putchar(l);
	}
	return (l);
}
