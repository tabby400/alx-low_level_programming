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
	unsigned int p;
	char *old;
	char *new;


	/*if ptr is NULL, malloc(new_size),is for  values of old_size and new_size*/
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	else
		old = ptr;
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new = malloc(new_size);
	if (new == NULL)
	{
		return (0);
	}
	/*if new_size is > old_size new memory shouldnt be initialized*/
	for (p = 0 ; p < (new_size || p < old_size) ; p++)
	{
		new[p] = old[p];

	}
	free(ptr);
	return (new);


}
