#include "main.h"

/**
 * string_toupper - function changes lowecase of a string to uppercase
 * @s: string to change to uppercase
 *
 * Return: string
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);

}
