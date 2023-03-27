#include "main.h"

/**
 * _strlen - returns lemgth of a string
 *
 * @s: string with length
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		count++;
	}
	return (count);
}
