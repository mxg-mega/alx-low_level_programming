#include "lists.h"

/**
  * print_dlistint - counts the nodes on a doubly linked list
  * @h: the head of the list
  *
  * Return: the number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
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
		printf("%d\n", current->n);
		current = current->next;
		length++;
	}
	return (length);
}
