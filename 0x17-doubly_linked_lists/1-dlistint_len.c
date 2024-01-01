#include "lists.h"

/**
  * dlistint_len - counts the nodes on a doubly linked list
  * @h: the head of the list
  *
  * Return: the number of nodes
  */
size_t dlistint_len(const dlistint_t *h)
{
	int length = 0;
	const dlistint_t *current = NULL;

	if (h == NULL)
	{
		return (0);
	}
	current = h;
	while (current != NULL)
	{
		current = current->next;
		length++;
	}
	return (length);
}
