#include "hash_tables.h"

/**
 * hash_table_delete - function deletes a hash table
 * @ht: the hash table
 *
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *tmp = NULL, *node = NULL;

	if (ht == NULL)
	{
		return;
	}
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
		{
			ht->array[i] = NULL;
			continue;
		}
		if (ht->array[i] != NULL)
		{
			if (ht->array[i]->next == NULL)
			{
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
			}
			else if (ht->array[i]->next != NULL)
			{
				node = ht->array[i];
				while (node != NULL)
				{
					tmp = node->next;
					free(node->key);
					free(node->value);
					free(node);
					node = tmp;
				}
			}
		}

	}
	free(ht->array);
	free(ht);
}
