#include "main.h"

/**
 * _strchr - function locates a character in a string
 *
 * @s: string to be checked for character
 * @c: character to be located in string
 *
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int p;

	for (p = 0 ; s[p] != '\0' ; p++)
	{
		if (s[p] == c)
			return (&s[p]);
	}
	return (0);
}
