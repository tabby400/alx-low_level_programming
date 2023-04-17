#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - the function initializes a variable of type struct dog
 *
 * @name: the name to be initialized of type struct dog
 * @owner: the owner to be initialized of type struct dog
 * @d: the pointer to type struct dog
 * @age: the age to initialize of the type struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
	else
		d = malloc(sizeof(struct dog));
}
