#include "main.h"

/**
 * _memset - function that fills memory with constant byte
 * @n: the number of bytes to be filled
 * @s: pointer of the memory area to be filled
 * @b: constant bytes that fill the memory area
 *
 * Return: destination with new filled bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0 ; p < n ; p++)
	{
		s[p] = b;
	}
	return (s);
}
