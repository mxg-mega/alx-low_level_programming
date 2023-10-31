#include "main.h"

/**
  * get_bit - gets the bit value at an index
  * @n: the n
  * @index: the index the value is at from 0
  *
  * Return: the bit at the index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > 64)
		return (-1);

	bit = n >> index;

	return (bit & 0x1);
}

