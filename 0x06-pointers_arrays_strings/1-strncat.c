#include "main.h"

/**
 * _strncat - function concatenated two strings with use of n bytes from src
 * @dest: where n bytes of string is appended
 * @src: source of string
 * @n: number of bytes from src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);

}
