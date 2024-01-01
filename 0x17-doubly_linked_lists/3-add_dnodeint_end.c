#include "lists.h"

/**
  * add_dnodeint_end - function adds node to the end
  * @head: head of node
  * @n: data of the new node
  * Return: returns address of new node or NULL if fail
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = NULL, *newNode = NULL;

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

	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = newNode;
	newNode->prev = current;
	return (newNode);
}
