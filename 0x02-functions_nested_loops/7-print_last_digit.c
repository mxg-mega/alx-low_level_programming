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

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	l = n % 10;
	/*printing int using putchar()*/
	_putchar(l + '0');
	return (l);
}
