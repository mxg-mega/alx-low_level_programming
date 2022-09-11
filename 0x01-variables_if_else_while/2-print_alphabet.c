#include <stdio.h>
/**
*main - Entry point
*Return: 0
*/
int main(void)
{
	char newline = '\n';
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar(newline);
	return (0);
}
