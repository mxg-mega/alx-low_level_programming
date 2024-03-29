#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_nodeint - function that adds a new node at the beginning.
* @head: pointer.
* @n: value of the new element.
* Return: address of the new element or NULL.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}

