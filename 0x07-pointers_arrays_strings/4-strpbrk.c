#include "main.h"

/**
 * _strpbrk - function that searches string for any of set of bytes
 *
 * @s: string to be looked at
 * @accept: any bytes of it to be looked in string
 *
 * Return: pointer to s if byte is matched, if not NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0 ; accept[b] ; b++)
		{
			if (*s == accept[b])
				return (s);
		}
		s++;
	}
	return ('\0');
}
