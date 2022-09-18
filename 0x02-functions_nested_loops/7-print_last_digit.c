#include "main.h"
/**
  *print_last_digit - function determines last digit of a number
  *@n: last digit
  *
  *Return:l value of the last digit of n
  */
int print_last_digit(int n)
{
	int l, print_two_of_it;

	l = n % 10;
	print_two_of_it = l * 11;
	return (print_two_of_it);
}
