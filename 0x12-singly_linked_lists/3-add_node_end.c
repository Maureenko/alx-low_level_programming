#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - add new node at the end of list
 * @head: pointer to head of list
 * @str: string to be added to head
 *
 * Return: address of new element or NULL;
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node1;
	list_t *node0;
	int i, len1 = 0;

	for (i = 0; str[i] != '\0'; i++)
		len1++;
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
	node1->len = len1;
	node1->next = NULL;
	if (*head == NULL)
	{
		*head = node1;
		return (node1);
	}
	node0 = *head;
	while (node0->next != NULL)
		node0 = node0->next;
	node0->next = node1;
	return (node1);
}
