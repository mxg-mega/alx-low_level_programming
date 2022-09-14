#include <stdio.h>
/**
*main - Entry point
*Return: 0
*/
int main(void)
{
	int numbers = 0x30;
	int SM = 0x61;

	while (numbers <= 0x39)
	{
		putchar(numbers);
		numbers++;
	}
	while (SM <= 0x66)
	{
		putchar(SM);
		SM++;
	}
	putchar('\n');
	return (0);
}
