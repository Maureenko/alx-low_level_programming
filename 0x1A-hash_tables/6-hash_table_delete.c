#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table to be deleted.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *temporary, *next;

	if (!ht)
		return;

	for (x = 0; x < ht->size; x++)
	{
		temporary = ht->array[x];
		while (temporary)
		{
			next = temporary->next;
			free(temporary->key);
			free(temporary->value);
			free(temporary);
			temporary = next;
		}
	}
	free(ht->array);
	free(ht);
}

