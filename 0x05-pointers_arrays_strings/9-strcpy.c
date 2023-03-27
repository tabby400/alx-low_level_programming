#include "main.h"

/**
 * char *_strcpy - function copies string pointed to by scr
 * @dest: where string is copied to
 * @src: where copied from
 *
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int k = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; k < l ; k++)
	{
		dest[k] = src[k];
	}
	dest[l] = '\0';
	return (dest);

}
