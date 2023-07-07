#include "hash_tables.h"

/**
 * hash_table_delete -  function which is used to delete
 * a hash table
 *
 * @ht: points to the hash table
 *
 * Return: Nothing
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int p;
	hash_node_t *current;
	hash_node_t *nxt_nd;
	hash_table_t *hd = ht;

	for (p = 0 ; p < ht->size ; p++)
	{
		if (ht->array[p] != NULL) /*checks if empty or no*/
		{
			current = ht->array[p];

			while (current)
			{
				nxt_nd = current->next;
				free(current->key);
				free(current->value);
				free(current);
				current = nxt_nd;
			}
		}
	}
	free(hd->array);
	free(hd);/*hash table memory allocation freed*/
}
