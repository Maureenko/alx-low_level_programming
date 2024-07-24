#include <stdio.h>
#include "hash_tables.h"

/**
* key_index - returns the index of a key
* @key: key
* @size: size of the array
* Return: index of key/value pair
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index % size);
}
