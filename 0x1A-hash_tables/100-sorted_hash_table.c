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

	hashtable->array = malloc(sizeof(shash_node_t *) * size);
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
		if (curr != NULL)
			printf(", ");
	}
	printf("}\n"); /*closing*/
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
	while (curr)
	{
		printf("'%s': '%s'", curr->key, curr->value);
		curr = curr->sprev;
		if (curr != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - function used to delete an
 * ordered hash table
 *
 * @ht: points to the sorted hash table
 *
 * Return: Nothing
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *curr_nd;
	shash_node_t *nxt;
	shash_table_t *hd = ht;

	if (!ht)
	{
		return;
	}

	curr_nd = ht->shead;
	while (curr_nd != NULL)
	{
		nxt = curr_nd->snext;
		free(curr_nd->key);
		free(curr_nd->value);
		free(curr_nd);
		curr_nd = nxt; /*loop continues*/
	}

	free(hd->array);
	free(hd); /*free table*/
}

/**
 * shash_table_get - get the value of a key in an
 * ordered hash table
 *
 * @ht: points to the ordered hash table.
 * @key: key with the value to get
 *
 * Return: the value associated with key otherwise NULL
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int x;
	shash_node_t *curr_nd;

	if (!ht || !key || *key == '\0')
	{
		return (NULL);
	}

	x = key_index((const unsigned char *)key, ht->size);
	if (x >= ht->size)
	{
		return (NULL);
	}

	curr_nd = ht->shead;
	while (curr_nd != NULL && strcmp(curr_nd->key, key) != 0)
		curr_nd = curr_nd->snext;

	return ((curr_nd == NULL) ? NULL : curr_nd->value); /*if found bring value*/
}

