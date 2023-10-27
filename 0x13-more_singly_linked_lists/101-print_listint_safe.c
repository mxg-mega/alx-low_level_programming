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

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;

		/* Check for a loop by comparing the current address to previous nodes */
		const listint_t *slow = head, *fast = head;

		while (fast != NULL && fast->next != NULL)
		{
			slow = slow->next;
			fast = fast->next->next;
			if (slow == fast)
			{
				printf("-> [%p] %d\n", (void *)slow, slow->n);
				exit(98);
			}
		}
	}

	return count;
}

