#include "hash_tables.h"

/**
 * hash_table_print - function print the hash table
 * @ht: the hash table
 *
 * Return: no return value
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	int printed = 0;
	hash_node_t *tmp;

	if (ht == NULL)
	{
		return;
	}

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (printed)
			{
				printf(", ");
			}
			printf("'%s': '%s'", tmp->key, tmp->value);
			printed = 1;
			tmp = tmp->next;
		}

	}
	printf("}\n");
}
