#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: pointer to head of string
 */
void free_list(list_t *head)
{
	list_t *node0;

	while (head != NULL)
	{
	node0 = head;
	if (node0->str != NULL)
		free(node0->str);
	head = head->next;
	free(node0);
	}
}
