#include "hash_tables.h"

/**
 * hash_table_get - function which is able to get the value
 * associated with a key
 *
 * @ht: points tot he hash table with key value pairs
 * @key: key with the value to get
 *
 * Return: the value associated with key ,otherwise NULL
 * if key is not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int x;
	hash_node_t *val;

	if (!ht || !key || *key == '\0')
	{
		return (NULL);
	}

	x = key_index((const unsigned char *)key, ht->size);
	if (x >= ht->size)
	{
		return (NULL);
	}

	val = ht->array[x];

	while (val && strcmp(val->key, key) != 0)
		val = val->next;

	return ((val == NULL) ? NULL : val->value);/*if match is found*/
}
