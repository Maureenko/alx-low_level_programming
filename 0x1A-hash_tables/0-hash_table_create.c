#include <stdio.h>
#include "hash_tables.h"
/**
* hash_table_create -creates a new hash table
* @size: size of the array
* Return: (0)ointer to the hash table, (1) return NULL
*/


hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash_table = NULL;

	hash_table = malloc(sizeof(hash_table_t));

	if (size == 0)
		return (NULL);

	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (i = 0 ; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}

	return (hash_table);
}
