#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 *
 * @b: the bytes to allocate in memory using malloc
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mallocpointer;

	mallocpointer = malloc(b);

	if (mallocpointer == NULL)
	{	
		exit(98);
	}
	return (mallocpointer);

}
