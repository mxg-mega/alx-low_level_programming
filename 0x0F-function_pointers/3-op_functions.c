#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * op_add - sums two integers
  * @a: first num
  * @b: second num
  *
  * Return: the sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - calculates the difference of two integers
  * @a: first num
  * @b: second num
  *
  * Return: the answer
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - calculates the product of two integers
  * @a: first num
  * @b: second num
  *
  * Return: the product
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divides two integers
  * @a: first num
  * @b: second num
  *
  * Return: the answer
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  * op_mod - function that calculates the modulus of two numbers
  * @a: first num
  * @b: second num
  *
  * Return: the modulus
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

