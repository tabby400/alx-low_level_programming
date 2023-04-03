#include "main.h"

/**
 * _memcpy - function that copies the memory area
 *
 * @src: where bytes are copied from
 * @dest: where bytes are copied to
 * @n: number of bytes to be copied
 *
 * Return: memory copied with n bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p;

	for (p = 0 ; p < n ; p++)
	{
		dest[p] = src[p];
	}
	return (dest);
}
