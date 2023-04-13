#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocates the memory for an array using malloc
 *
 * @nmemb: the number of elements with a specific size
 *
 * @size: size of each of the elements in array
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int p;
	char *pointer;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	pointer = malloc(nmemb * size);

	if (pointer == NULL)
	{
		return (NULL);
	}
	for (p = 0 ; p < (nmemb * size) ; p++)/*nmemb * size gives total size*/
		pointer[p] = '\0';
	return (pointer);

}
