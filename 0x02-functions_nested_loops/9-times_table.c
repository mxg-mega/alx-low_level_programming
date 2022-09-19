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
		j = 0;
		while (j <= 9)
		{
			int multiplication = i * j;
			_putchar('0' + multiplication);
			_putchar(',');
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
