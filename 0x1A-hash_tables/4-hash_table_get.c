#include "hash_tables.h"

/**
 * hash_table_get - function retrieves the value associated with a key
 * @ht: the hash table
 * @key: the key to retrieve value
 *
 * Return: NULL if fail and value of key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *tmp = NULL;

	if (ht == NULL || key == NULL || strcmp(key, " ") == 0)
	{
		return (NULL);
	}
	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		return (NULL);
	}
	if (ht->array[index]->next != NULL && strcmp(ht->array[index]->key, key) != 0)
	{
		tmp = ht->array[index];
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		return (tmp->value);

	}
	return (ht->array[index]->value);
}
