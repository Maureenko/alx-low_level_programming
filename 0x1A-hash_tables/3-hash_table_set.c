#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * hash_table_set - adds elements to a hash table
 * @ht: hashtable to added or udated to key/value pair
 * @key: key
 * @value: value associated with the key
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL;
	unsigned long int index;

	if (*key == '\0' || value == NULL || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
	return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}

