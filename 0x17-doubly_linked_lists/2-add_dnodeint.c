#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of the list
 * @head: head of the list
 * @n: integer value to be stored at new node.
 *
 * Return: address of the new element if SUCCESS
 * on FAIL, return NULL.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;
	return (new_node);
}
