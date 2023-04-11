#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to newly allocated space
 *           in memory that has copy of string as parameter
 * @str: pointer to copy of string given as parameter
 *
 * Return: NULL if str is NULL and if memory is insufficient
 */

char *_strdup(char *str)
{
	int p;
	int h;
	char *cpstr;

	/*check for NULL string*/
	if (str == NULL)
	{
		return (NULL);
	}
	for (h = 0 ; str[h] != '\0' ; h++)
	{
		cpstr = malloc(sizeof(char) * (h + 1));
	}
	/*check if copied string is found*/
	if (cpstr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (p = 0 ; p < h ; p++)
		{
			cpstr[p] = str[p];
		}
		return (cpstr);
	}
}
