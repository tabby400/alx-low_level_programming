#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - function used to find length of string
 *
 * @string: the string to ne assessed
 *
 * Return: total length of the string
 */

int _strlen(char *string)
{
	int i = 0;

	for (i = 0 ; string[i] != '\0' ; i++)
	;
	return (i);
}

/**
 * _strcpy - function that copies the string src shows it
 *           to where desst shows it
 * @src: contains the string to be copied
 * @dest: pointer to where the string is to be copied
 *
 * Return: dest
 */

char *_strcpy(char *src, char *dest)
{
	int p = 0;

	for (p = 0 ; src[p] ; p++)
	{
		dest[p] = src[p];
	}

	return (dest);
}

/**
 * new_dog - function which creates a new dog
 *
 * @name: the name of the newly created dog
 * @age: the age of newly created dog
 * @owner: the owner of the newly created dog
 *
 * Return: the pointer to the new dog using type struct dog
 *           and NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int lname = _strlen(name);
	int lown = _strlen(owner);
	dog_t *nwdog; /*type struct dog replaced by dog_t used*/

	nwdog = malloc(sizeof(dog_t));

	if (nwdog == NULL)
	{
		return (NULL);
	}
	(*nwdog).name = malloc(sizeof(char) * (lname + 1));

	if ((*nwdog).name == NULL)
	{
		free(nwdog);
		return (NULL);
	}
	(*nwdog).owner = malloc(sizeof(char) * (lown + 1));
	if ((*nwdog).owner == NULL)
	{
		free(nwdog);
		free((*nwdog).name);
		return (NULL);
	}
	(*nwdog).name = _strcpy((*nwdog).name, name);
	(*nwdog).age = age;
	(*nwdog).owner = _strcpy((*nwdog).owner, owner);

	return (nwdog);



}
