#include "hash_tables.h"

/**
 * hash_table_create - function used to create a hash table
 *
 * @size: this is the array size
 *
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int p;
	hash_table_t *hashtable;

	hashtable = malloc(sizeof(hash_table_t)); /*allocate memory*/

	if (!hashtable)
	{
		return (NULL); /*check if memory was really allocated*/
	}

	hashtable->size = size;

	hashtable->array = malloc(size * sizeof(hash_node_t *));
	if (!hashtable->array)
	{
		free(hashtable);
		return (NULL);
	}

	for (p = 0 ; p < size ; p++)
		hashtable->array[p] = NULL;/*all elements set to NULL all empty*/

	return (hashtable);
}
