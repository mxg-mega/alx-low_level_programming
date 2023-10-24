#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_lists - print the values of a linked list
 * @h: head struct of the linked list
 * Return: a size_t
 */
size_t print_list(const list_t *h)
{
	const list_t *currentNode;
	size_t n;

	n = 0;
	currentNode = h;
	while (currentNode != NULL)
	{
		if (currentNode->str != NULL)
		{
			printf("[%d] %s\n", currentNode->len, currentNode->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		n++;
		currentNode = currentNode->next;
	}
	return (n);
}

