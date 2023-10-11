#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
	int num, i;
	char ptr[20];

	num = 9803;
	i = 0;
	do{
		ptr[i++] = num % 10 + '0';
		num /= 10;
	} while (num > 0);

	while (i > 0)
	{
		putchar(ptr[--i]);
	}
	putchar('\n');
	return 0;
}
