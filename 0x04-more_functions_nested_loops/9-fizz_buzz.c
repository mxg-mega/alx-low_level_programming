#include <stdio.h>
/**
*main - entry point
*Return: always 0
*/
int main(void)
{
	int n, i, j;

	n = 100;
	i = 1;
	while (i <= n)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
		if (i == 100)
		{
			putchar('\n');
		}
		i++;
	}
	return (0);
}
