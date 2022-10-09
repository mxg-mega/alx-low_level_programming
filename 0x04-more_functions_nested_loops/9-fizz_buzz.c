#include <stdio.h>
/**
*main - entry point
*Return: always 0
*/
int main(void)
{
	int n, i;

	n = 100;
	i = 1;
	while (i < n)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
			if (i == 100)
                	{
				printf("Fizz");
                        	putchar('\n');
                	}
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			putchar(' ');
		}
		else
		{
			printf("%d", i);
			putchar(' ');
		}
		i++;
	}
	return (0);
}
