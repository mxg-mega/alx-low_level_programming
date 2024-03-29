#include "hash_tables.h"

/**
 * hash_table_set - function adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value of the key
 *
 * Return: 1 if succeed or 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index = 0;
	hash_node_t *new_node = NULL;

	if (ht == NULL || key == NULL || strcmp(key, " ") == 0)
	{
		return (0);
	}

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		strcpy(ht->array[index]->value, (char *)value);
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t *));
	if (new_node == NULL)
	{
		return (0);
	}

	new_node->key = NULL;
	new_node->value = NULL;
	new_node->next = NULL;

	new_node->key = strdup(key);
	if (value != NULL)
	{
		new_node->value = strdup(value);
	}

	if (ht->array[index] != NULL)
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		return (1);
	}

	ht->array[index] = new_node;
	return (1);
}
