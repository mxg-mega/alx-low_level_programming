#include "main.h"
/**
 *times_table - function prints times table
 *
 *Return: no return
 */
void times_table(void)
{
	/*i for the numbers multipled j for the multiplication under i*/
	int i, j;

	i = 0;
	while (i <= 9)
	{
		_putchar('0');
		j = 1;
		while (j <= 9)
		{
			int multiplication = i * j;

			_putchar(',');
			_putchar(' ');
			/*this if block takes the product and split into two
			 *print the first part(tens) by dividing by 10
			 *after the if block using modulus u print the second digit
			 */
			if (multiplication <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((multiplication / 10) + '0');
			}
			_putchar((multiplication % 10) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
