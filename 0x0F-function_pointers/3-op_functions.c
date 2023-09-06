#include <stdio.h>
#include "3-calc.h"

/**
  * op_add - addition funtion
  * @a: first integer
  * @b: second integer
  * Return: return the reult of addition
 */
int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
  * op_sub - subtraction function
  * @a: first integer
  * @b: second integer
  * Return: difference between the parameters
 */
int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
  * op_mul - multiplication funtion
  * @a: first integer
  * @b: second integer
  * Return: result of multiplication
  */
int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
  * op_div - division function
  * @a: first integer
  * @b: second integer
  * Return: divion of both integers
  */
int op_div(int a, int b)
{
	return ((a) / (b));
}

/**
  * op_mod - modulus function
  * @a: first integer
  * @b: second integer
  * Return: remainder after division of integers
 */
int op_mod(int a, int b)
{
	return ((a) % (b));
}

