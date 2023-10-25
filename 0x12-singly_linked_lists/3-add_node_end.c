#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_node_end - adds a node at the end of list
  * @head: pointer to the head node
  * @str: value of string of added node
  * Return: pointer to the list with the adde node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *current;

	if (str == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = newNode;

	return (*head);
}

