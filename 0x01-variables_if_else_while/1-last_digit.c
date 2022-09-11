#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*Return: 0
*/
int main(void)
{
	/*Declaring variable n and last_digit*/
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX /2;
	/*using the modulus tp divide by ten to get the last digit*/
	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, last_digit);
	}else if (last_digit == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, last_digit);
	}else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last_digit);
	}
	return (0);

}
