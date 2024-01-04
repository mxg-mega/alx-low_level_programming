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

	if (*h == NULL)
	{
		return (add_dnodeint(h, n));
	}
	if (idx == 0)
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
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	newNode->next = current->next;
	newNode->prev = current;
	if (current->next != NULL)
	{
		current->next->prev = newNode;
	}
	current->next = newNode;
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
