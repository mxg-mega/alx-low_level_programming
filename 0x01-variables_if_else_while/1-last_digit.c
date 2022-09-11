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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*using the modulus to divide by ten to get the last digit*/

	if ((n % 10) > 5)
	{
		printf("Last digit of %i ", n); 
		n = n % 10;
		printf("is %i and is greater than 5\n", n);
	} else if ((n % 10) == 0)
	{
		printf("Last digit of %i ", n);
		n = n % 10;
		printf("is %i and is 0\n", n);
	} else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %i ", n);
		n = n % 10;
		printf("is %i and is less than 6 and not 0\n", n);
	}
	return (0);

}
