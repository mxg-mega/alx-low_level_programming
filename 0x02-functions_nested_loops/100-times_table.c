#include "main.h"
/**
 *times_table - function prints times table
 *
 *Return: no return
 */
void print_times_table(int n)
{
	/*i for the numbers multipled j for the multiplication under i*/
	int i, j;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= 12; j++)
			{
				int prod = i * j;
				/*for product greater than or equal to 10*/
				if (prod >= 10 && prod < 100)
				{
					_putchar('0' + (prod / 10));
					_putchar('0' + (prod % 10));
				}
				else if (prod > 100)
				{
					/*if the product is greater than 100*/
					_putchar('0' + (prod / 100));
					/*the tens var gets the middle digit*/
					int tens = prod / 10;
					_putchar('0' + (tens % 10));
					_putchar('0' + (prod % 10));
				}
				else
				{
					/*else just print the product*/
					_putchar('0' + prod);
				}
				if (j != 12)
				{
					/*if j reaches the last digit it will not print the comma*/
					_putchar(',');
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
