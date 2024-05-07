#include "lists.h"

/**
 * sum_dlistint - returns sum of all the data of a dlistint_t list
 * @head: pointer to head of the list
 *
 * Return: sum or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return (0);
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
