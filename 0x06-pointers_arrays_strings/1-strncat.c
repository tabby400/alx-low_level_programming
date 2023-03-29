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
	int destlength = 0;
	int scrlength = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destlength++;
	for (i = 0 ; src[i] != '\0' ; i++)
		scrlength++;
	for (i = 0 ; i < n ; i++)
		dest[destlength + i] = src[i];
	return (dest);
}
