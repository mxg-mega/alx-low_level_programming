#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * free_list - deletes an entire list
  * @head: head node of list
  * Return: no return
  */
void free_list(list_t *head)
{
	list_t *current;
	list_t *next;

	if (head == NULL)
	{
		return;
	}
	current = head;
	while (current->next != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
	free(next->str);
	free(next);
}
