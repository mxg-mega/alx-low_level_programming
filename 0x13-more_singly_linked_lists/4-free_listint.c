#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: The node at the beginning of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *c;
	listint_t *n;

	if (head == NULL)
	{
		return;
	}
	c = head;
	while (c->next != NULL)
	{
		n = c->next;
		free(c);
		c = n;
	}
	free(n);
}

