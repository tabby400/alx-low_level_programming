#include "hash_tables.h"

/**
 * hash_table_set - function used to add an element to the hash table
 *
 * @ht: points to the hash table
 * @value: the value that is with the paerticular key and can be empty
 * @key: key to be added but not an empty one
 *
 * Return: 1 if it succeeds, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *cp_val;
	hash_node_t *add;
	unsigned long int p;
	unsigned long int ind;

	if (!ht || !key || *key == '\0' || !value)
	{
		return (0);
	}

	cp_val = strdup(value);
	if (!cp_val)
		return (0);
	ind = key_index((const unsigned char *)key, ht->size);
	for (p = ind ; ht->array[p] ; p++)
	{
		if (strcmp(ht->array[p]->key, key) == 0)
		{
			free(ht->array[p]->value);
			ht->array[p]->value = cp_val;
			return (1);
		}
	}
	add = malloc(sizeof(hash_node_t));
	if (!add)
	{
		free(cp_val);
		return (0);
	}
	add->key = strdup(key);
	if (!add->key)
	{
		free(add);
		return (0);
	}
	add->value = cp_val;
	add->next = ht->array[ind];
	ht->array[ind] = add;

	return (1);
}
