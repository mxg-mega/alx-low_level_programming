#include "main.h"
/**
*print_to_98 - funtion print from n to 98
*@n: integer to start from
*
*Return: nothing to return
*/
void print_to_98(int n)
{
	if (n >= 98)
	{
		/*if the number is grater than 98*/
		while (n > 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}
		_putchar('\n');
	}
	else
	{
		/*if number is less than 98*/
		while (n < 98)
		{
			_putchar(n + '0');
			n++;
		}
		_putchar('\n');
	}
}
