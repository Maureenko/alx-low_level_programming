#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - print all elements of a list
 * @h: address of the head of the list
 *
 * Return:the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
