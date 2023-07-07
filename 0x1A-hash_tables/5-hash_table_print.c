#include "hash_tables.h"

/**
 * hash_table_print - function which prints the has table
 *
 * @ht: points to the hash table
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int p;
	unsigned char separator = 0;
	hash_node_t *temp_nd;

	if (!ht)
	{
		return;
	}

	printf("{");/*start of hash table contents*/
	for (p = 0 ; p < ht->size ; p++)
	{
		if (ht->array[p] != NULL)
		{
			if (separator == 1)
			{
				printf(", ");
			}

			temp_nd = ht->array[p];

			while (temp_nd != NULL)
			{
				printf("'%s': '%s'", temp_nd->key, temp_nd->value);
				temp_nd = temp_nd->next;
				if (temp_nd != NULL)
					printf(", ");
			}
			separator = 1; /*updating*/
		}
	}
	printf("}\n");
}
