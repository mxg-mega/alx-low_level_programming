#include "main.h"
#include <stdio.h>
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
			printf("%d, ", n)
			n--;
		}
		printf("%d\n", n);
	}
	else
	{
		/*if number is less than 98*/
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", n);
	}
}
