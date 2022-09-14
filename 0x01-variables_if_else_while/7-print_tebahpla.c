#include <stdio.h>
/**
*main - Entry point
*Return: 0
*/
int main(void)
{
	int a = 122;

	while (a > 96)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
