#include "lists.h"

/**
 * dlistint_len - returns the num of elements in a linked list
 * @h: head of the list.
 *
 * Return: no of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
