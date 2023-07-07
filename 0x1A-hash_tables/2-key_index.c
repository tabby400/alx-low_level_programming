#include "hash_tables.h"

/**
 * key_index - function that is used to give out the
 * index of a key
 *
 * @key: key in which we are finding the index
 * @size: size of array of hash table
 *
 * Return: the index at which the key value pair
 * should be stored in array
 *
 * Description:to get the index the djb2 algo is used
 * to generate hash values for the inputed strings
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);  /*to fit in the range of indices*/
}
