#include "main.h"

/**
  * print_binary - converts int to binary
  * @n: the decimal
  *
  * Return:
  */
void print_binary(unsigned long int n)
{
	int track;
	int flag;

	track = (sizeof(unsigned long int) * 8) - 1;
	if (n == 0)
	{
		printf("0");
		return;
	}
	flag = 0;
	while (track >= 0)
	{
		if ((n >> track) & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
		track--;
	}
}
