#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - function adds a node to the list
 * @head: the head node
 * @str: the value of str of the added node
 * Return: pointer to the new head node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	char *strCopy;
	unsigned int len;

	newNode = (list_t *)malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	strCopy = strdup(str);
	len = strlen(strCopy);
	newNode->str = strCopy;
	newNode->len = len;

	newNode->next = *head;
	*head = newNode;
	return (*head);
}

