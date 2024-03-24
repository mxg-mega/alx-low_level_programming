#include "hash_tables.h"

/**
 * key_index - function get the index of a key
 * @key: the string
 * @size: the size of the array
 *
 * Return: returns the index of the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;
	return (index);
}
