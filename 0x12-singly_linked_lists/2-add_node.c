#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node1;
	int i, len1 = 0;

	if (str == NULL)
		return (NULL);
	node1 = malloc(sizeof(list_t));
	if (node1 == NULL)
		return (NULL);
	node1->str = strdup(str);
	if (node1->str == NULL)
	{
		free(node1);
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		len1++;
	node1->len = len1;
	node1->next = *head;
	*head = node1;
	return (node1);
}
