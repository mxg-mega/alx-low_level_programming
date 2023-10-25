#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - function adds a node to the list
 *
 *
 * Return:
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = NULL;
	char *strCopy;

	if (head != NULL)
	{
	newNode = malloc(sizeof(list_t));
	strCopy = strdup(head->str);
	newNode->str = strcopy;
	newNode->len = head->len;
	newNode->next = NULL;
	newNode->next = head;
	}
	head = newNode;

	return ();
}

