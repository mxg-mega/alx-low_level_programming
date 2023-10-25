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
	if (head == NULL)
	{
		return;
	}
	free_list(head->next);
	free(head->str);
	free(head);
}

