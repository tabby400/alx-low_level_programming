#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function used to free dogs
 *
 * @d: the pointer to the dog being freed
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
	else
		return;
}
