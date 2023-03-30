#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @str: string to be encoded
 *
 * Return: str
 */

char *rot13(char *str)
{
	int i;
	int p;

	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char srot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (p = 0 ; p < 52 ; p++)
		{

			if (str[i] == s1[p])
			{
				str[i] = srot[p];
				break;
			}
		}
	}
	return (str);
}
