#include "lists.h"

/**
  * add_dnodeint - funtion adds node to the beginnig
  * @head: the head of list
  * @n: the number data
  *
  * Return: Address of new node or null if failed
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	(*head)->prev = newNode;
	newNode->next = *head;
	*head = newNode;
	return (*head);

}
