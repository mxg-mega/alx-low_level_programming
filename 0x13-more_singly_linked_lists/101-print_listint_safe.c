#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current;

	current = head;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
	
		if (current <= current->next)
		{
			printf("-> [%p] %d\n", (void *)head->next->next, head->next->next->n);
			exit(98);
		}
		current = current->next;
	}
	return (count);
}

