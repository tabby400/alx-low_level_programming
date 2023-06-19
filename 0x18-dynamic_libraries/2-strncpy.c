#include "main.h"

/**
 * _strncpy - function that copies string
 *
 * @dest: where to copy string
 * @src: source of string
 * @n: number of strings
 *
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
