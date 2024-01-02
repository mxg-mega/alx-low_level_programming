#include "lists.h"

/**
  * sum_dlistint - function adds up all the numbers attached to the nodes
  * @head: head node of the list
  *
  * Return: the sum or if the list is empty, return 0
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
