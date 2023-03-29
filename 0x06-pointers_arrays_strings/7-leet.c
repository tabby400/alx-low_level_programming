#include "main.h"

/**
 * leet - function that encodes a string to 1337
 * @str: string encoded
 *
 * Return: str
 */

char *leet(char *str)
{
	int i;
	int p;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (p = 0 ; a[p] != '\0' ; p++)
		{
			if (str[i] == a[p])
				str[i] = b[p];
		}
	}
	return (str);

}
