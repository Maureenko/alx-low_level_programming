#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table to be printed
 * Return: key/value in array order, nothing in ht is NULL
 */
void hash_table_print(const hash_table_t *ht)
{
	int test = 0;
	hash_node_t *temp;
	unsigned long int i;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];

		while (temp)
		{
			if (test == 1)
				printf(", ");

			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
		}
	}
	printf("}\n");
}

