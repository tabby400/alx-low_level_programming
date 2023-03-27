#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: the string to convert
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int i, p, n, len, q, digit;

	i = 0;
	p = 0;
	n = 0;
	len = 0;
	q = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && q == 0)
	{
		if (s[i] == '-')
			++p;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (p % 2)
				digit = -digit;
			n = n * 10 + digit;
			q = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			q = 0;
		}
		i++;
	}

	if (q == 0)
		return (0);

	return (n);

}
