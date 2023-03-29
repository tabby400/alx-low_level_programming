#include "main.h"

/**
 * cap_string - function that capitalizes all words of string
 *
 * @c: string to be capitalized
 *
 * Return: c
 */

char *cap_string(char *c)
{
	int i = 0;

	while (c[i])
	{
		while (!(c[i] >= 'a' && c[i] <= 'z'))
			i++;
		if (c[i - 1] == ' ' ||
		    c[i - 1] == '\t' ||
		    c[i - 1] == '\n' ||
		    c[i - 1] == ',' ||
		    c[i - 1] == ';' ||
		    c[i - 1] == '.' ||
		    c[i - 1] == '!' ||
		    c[i - 1] == '?' ||
		    c[i - 1] == '"' ||
		    c[i - 1] == '(' ||
		    c[i - 1] == ')' ||
		    c[i - 1] == '{' ||
		    c[i - 1] == '}' ||
		    i == 0)
			c[i] -= 32;

		i++;
	}
	return (c);
}
