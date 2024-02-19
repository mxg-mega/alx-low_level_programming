#include "hash_tables.h"

/**
 * hash_table_create - function creates a hash table.
 * @size: size of the hash table array
 *
 * Return: a pointer to the newly created hash table
 * or NULL if fail
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = NULL;

	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
	{
		return (NULL);
	}
	new_hash_table->size = size;
	if (size <= 0)
	{
		free(new_hash_table);
		return (NULL);
	}
	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash_table == NULL)
	{
		free(new_hash_table);
		return (NULL);
	}
	return (new_hash_table);
}
