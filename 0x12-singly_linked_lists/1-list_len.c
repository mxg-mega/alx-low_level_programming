#include "lists.h"
#include <stdio.h>

/**
 * list_len- counts the members of a list
 * @h: head node
 * Return: total number of elements of a list
 */
size_t list_len(const list_t *h)
{
	size_t total;
	const list_t *current;

	current = h;
	total = 0;
	while (current != NULL)
	{
		total++;
		current = current->next;
	}
	return (total);
}

