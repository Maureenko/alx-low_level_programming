#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
/**
 * hash_table_get - returns a value associated with a key
 * @ht: hash table to look into
 * @key: key being searched for
 * Return: on success the value associated with the key,
 * on failure return NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp = NULL;

	if (!key || !ht)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}

