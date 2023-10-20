#include "lists.h"

/**
 * list_len - return no of elements in a linked list_t list
 * @h: pointer to head
 * Return: no of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != 0)
	{
		i++;
		h = h->next;
	}
	return (i);
}
