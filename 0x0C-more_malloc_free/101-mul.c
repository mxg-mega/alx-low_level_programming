#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * print_int - function prints an integer
  * @n: interger to be displayed
  * Return: no return
*/
void print_int(int n)
{
	int divisor, i, j, remainder;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	divisor = 1;
	while((n / divisor) > 9)
	{
		divisor = divisor * 10;
	}

	remainder = n;
	i = divisor;
	while(i > 1)
	{
		j = remainder / i;
		_putchar('0' + j);
		remainder = n % i;
		i /= 10;
	}
	_putchar((n % 10) + '0');
}

/**
  * print - function prints strings
  * @str: string
  * Return: no Return
  */
void print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
/**
  * _mul - funtion that process the multiplication
  * @num1: first num
  * @num2: second number
  * Return: the product of the arguments
  */
int _mul(int num1, int num2)
{
	return (num1 * num2);
}

/**
  * main - function multiplies two positive numbers
  * @argc: number of arguments
  * @argv: array of arguments
  *
  * Return: Always 0 except failure then 98
  */
int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc < 3 || argc > 3)
	{
		print("Error\n");
		exit(98);
	}

	if (!(argv[1][0] >= '0' || argv[1][0] <= '9'))
	{
		print("Error\n");
		exit(98);
	}

	if (!(argv[2][0] >= '0' || argv[2][0] <= '9'))
	{
		print("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = _mul(num1, num2);

	print_int(product);
	_putchar('\n');

	return (0);
}

