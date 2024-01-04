#include "lists.h"

size_t dlistint_len(const dlistint_t *h);

/**
  * insert_dnodeint_at_index - function inserst a node at an index
  * @h: head node
  * @idx: the index to insert
  * @n: data number of the nde node
  *
  * Return: the address of the new node, or NULL if it failed
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = NULL, *newNode = NULL;
	unsigned int i = 0;
	size_t len = 0;

	if (*h == NULL)
	{
		return (NULL);
	}
	len = dlistint_len(*h);
	if (idx == 0 || len == idx)
	{
		return (add_dnodeint(h, n));
	}
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	current = *h;
	if (!current && idx > 0)
	{
		free(newNode);
		return (NULL);
	}
	while (current->next != NULL && i < idx)
	{
		i++;
		current = current->next;
	}

	if (i < idx)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = current;
	newNode->prev = current->prev;
	current->prev->next = newNode;
	current->prev = newNode;
	return (newNode);

}

/**
  * dlistint_len - counts the nodes on a doubly linked list
  * @h: the head of the list
  *
  * Return: the number of nodes
  */
size_t dlistint_len(const dlistint_t *h)
{
	int length = 0;
	const dlistint_t *current = NULL;

	if (h == NULL)
	{
		return (0);
	}
	current = h;
	while (current != NULL)
	{
		current = current->next;
		length++;
	}
	return (length);
}
