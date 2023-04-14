#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates memory block using malloc
 * and free
 *
 * @ptr: memory previously allocated with a call to malloc(old size)
 * @old_size: this is size in bytes of previous allocated space
 * @new_size: this is the new size of new memory block
 *
 * Return: the pointer to the new memory area
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/*if new size is greater added memory is not initialized if same return ptr*/
	if (new_size == old_size)
	{
		return (ptr);
	}
	/*free the space when necessary*/
	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
