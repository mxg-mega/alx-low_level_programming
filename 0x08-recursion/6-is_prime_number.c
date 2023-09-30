#include <stdio.h>
#include "main.h"

/**
  * is_prime_number - a functions that determines a prime numbers
  * @n: number
  * Return: 1 if true
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}
	else
	{
	return is_prime_number(n / 2 + 1);
	}
}
