#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: head of the node
 *
 * Return: element count
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
