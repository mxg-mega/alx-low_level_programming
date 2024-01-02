#include "lists.h"

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
	while (current->next != NULL && i <= idx)
	{
		if (i == idx)
		{
			newNode->next = current;
			newNode->prev = current->prev;
			if (current->prev != NULL)
			{
				current->prev->next = newNode;
			}
			current->prev = newNode;
			return (newNode);
		}
		i++;
		current = current->next;
	}

	free(newNode);
	return (NULL);

}
