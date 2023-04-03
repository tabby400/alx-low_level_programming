#include "main.h"

/**
 * _strspn - function gets the length of a prefix substring
 *
 * @s : the string to be looked at
 * @accept: the prefix of substring to be looked at
 *
 * Return: number of bytes from inital s with only bytes from accept
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int initialbytes = 0;
	int m;

	while (*s)
	{
		for (m = 0 ; accept[m] ; m++)
		{
			if (*s == accept[m])
			{
				initialbytes++;
				break;
			}
			else if (accept[m + 1] == '\0')
				return (initialbytes);
		}
		s++;
	}
	return (initialbytes);
}
