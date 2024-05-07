#include "lists.h"

/**
 * delete_dnodeint_at_index - - deletes the node at a given position
 * @head: pointer to pointer to head of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		if (current != NULL)
		{
			*head = current->next;
			if (*head != NULL)
				(*head)->prev = NULL;
			free(current);
			return (1);
		}
		return (-1);
	}

	for (i = 0; i < index - 1 && current != NULL; i++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);

	current->next = current->next->next;
	if (current->next != NULL)
		current->next->prev = current;
	free(current->next->prev);
	return (1);
}
