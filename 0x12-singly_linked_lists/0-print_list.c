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
	list_t *currentNode;
	size_t n;

	n = 0;
	currentNode = h;
	while (currentNode->next != NULL)
	{
		printf("[%d] ", currentNode->len);
		if (currentNode->str != NULL)
		{
			printf("%s", currentNode->str);
		}
		else
		{
			printf("(nil)");
		}
		n++;
		currentNode = h->next;
	}
	return (n);
}

