#include "lists.h"

/**
  * delete_dnodeint_at_index - function deletes node at an index
  * @head: head node
  * @index: the index starting from 0
  *
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL;
	unsigned int tracker = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	current = *head;
	while (current != NULL && tracker < index)
	{
		tracker++;
		printf("tracker %d < index %d\n", tracker, index);
		current = current->next;
	}
	if (current->prev != NULL)
	{
		current->prev->next = current->next;
		current->next->prev = current->prev;
	}
	else if (current->prev == NULL && current->next != NULL)
	{
		*head = current->next;
		current->next->prev = NULL;
	}
	else
	{
		current->prev->next = NULL;
	}
	if (tracker == 0)
	{
		*head = NULL;
		return (-1);
	}
	free(current);
	return (1);
}
