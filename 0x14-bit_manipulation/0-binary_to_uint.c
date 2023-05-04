#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - function which converts a binary number to
 *                  unsigned integer
 * @b: points to the string with 0 and 1 chars
 *
 * Return: the converted binary number otherwise 0, if
 * there are one or more chars in the string that are not 0 or 1
 * or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int p;
	unsigned int y = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (p = 0 ; b[p] ; p++)
	{
		if (b[p] < '0' || b[p] > '1')
		{
			return (0);/*any other number apart from 0 and 1*/
		}
		y = y * 2 + (b[p] - '0');
	}
	return (y);
}
