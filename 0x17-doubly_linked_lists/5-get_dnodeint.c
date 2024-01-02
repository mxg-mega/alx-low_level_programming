#include "lists.h"

/**
  * get_dnodeint_at_index - gets the data of the node at a certain index
  * @head: head of the list
  * @index: the index
  *
  * Return: NULL if failed or the node if success
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = NULL;

	if (head == NULL)
	{
		return (NULL);
	}
	current = head;
	while (current->next != NULL && i < index)
	{
		i++;
		current = current->next;
	}
	if (i < index)
	{
		return (NULL);
	}
	return (current);
}
