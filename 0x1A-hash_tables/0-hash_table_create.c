#include "hash_tables.h"

/**
 * hash_table_create - function used to create a hash table
 *
 * @size: this is the array size
 *
 * Return: pointer to the newly craetyed hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int p;
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t)); /*allocate memory*/

	if (!ht)
	{
		return (NULL); /*check if memory was really allocated*/
	}

	ht->size = size;

	ht->array = malloc(size * sizeof(hash_node_t *));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	for (p = 0 ; p < size ; p++)
		ht->array[p] = NULL;/*all elements set to NULL all empty*/

	return (ht);
}
