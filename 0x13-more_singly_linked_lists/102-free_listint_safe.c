#include "lists.h"

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len;
	listint_t *current;
	listint_t *next;

	if (h == NULL || *h == NULL)
	{
		return (-1);
	}
	current = *h;
	len = 0;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
		len += sizeof(listint_t);
	}

	free(next);
	len += sizeof(listint_t);
	*h = NULL;
	return (len);
}

