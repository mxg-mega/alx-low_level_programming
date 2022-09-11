#include <stdio.h>
/**
*main - Entry point
*Return: 0
*/
int main(void)
{
	int i = 97;
	char newline = '\n';

	while (i <= 122)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	putchar(newline);
	return (0);
}
