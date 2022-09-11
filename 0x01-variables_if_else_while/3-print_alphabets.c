#include <stdio.h>
/**
*main - entry point
*Return: 0
 */
int main(void)
{
	int i = 65;
	int L = 97;
	char newline = '\n';

	while (L <= 122)
	{
		putchar(L);
		L++;
	}
	while (i <= 90)
	{
		putchar(i);
		i++;
	}
	putchar(newline);
	return (0);

}
