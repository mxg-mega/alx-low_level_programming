#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: The list
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	size_t len;

	len = 0;
	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		len++;
		current = current->next;
	}
	return (len);
}

