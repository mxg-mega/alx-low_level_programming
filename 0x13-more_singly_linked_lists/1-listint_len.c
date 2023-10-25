#include "lists.h"

/**
 * listint_len - Computes the number of elements in a linked listint_t list
 * @h: The linked list
 * Return: The number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	size_t len;

	len = 0;
	current = h;
	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
