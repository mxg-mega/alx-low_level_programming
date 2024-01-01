#include "lists.h"

/**
  * free_dlistint - function frees the linked list
  * @head: the head of the link
  * 
  * Return: No return
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL, *temp = NULL;

	if (head == NULL)
	{
		return;
	}
	current = head;
	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
