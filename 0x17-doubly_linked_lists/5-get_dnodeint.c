#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node in a dlistini_t list
 * @head: pointer to head of the list
 * @index: inde of the node
 *
 * Return: index of node or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;
	for (i = 0; i < index && current != NULL; i++)
		current = current->next;
	
	return (current);
}
