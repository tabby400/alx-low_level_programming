#include "hash_tables.h"

/**
 * shash_table_create - function which creates a hash table
 * with ordered elements
 *
 * @size: new hash table size
 *
 * Return: a pointer to the hash table, otherwise NULL
 *
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int x;
	shash_table_t *hashtable;

	hashtable = malloc(sizeof(shash_table_t));
	if (!hashtable)
	{
		return (NULL);
	}

	hashtable->size = size;

	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (!hashtable->array)
	{
		return (NULL);
	}
	for (x = 0 ; x < size ; x++)
		hashtable->array[x] = NULL;
	hashtable->shead = NULL;
	hashtable->stail = NULL;

	return (hashtable);
}

/**
 * shash_table_print - function which prints an ordered hash table
 *
 * @ht: points to the ordered hash table
 *
 * Return: Nothing
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *curr;

	if (!ht)
	{
		return;
	}

	curr = ht->shead;
	printf("{");/*start the printed output*/

	while (curr)
	{
		printf("'%s': '%s'", curr->key, curr->value);
		curr = curr->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - function that prints
 * an ordered hash table in reverse
 *
 * @ht: points to the ordered hash table
 *
 * Return: Nothing
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *curr;

	if (!ht)
	{
		return;
	}

	curr = ht->stail; /*in reverse*/
	printf("{");
	while (node)
	{
		printf("'%s': '%s'", curr->key, curr->value);
		curr = curr->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}
