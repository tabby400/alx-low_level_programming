#include "main.h"

/**
 * _strlen_recursion - function retuns length of string
 *
 * @s: the length
 *
 * Return: the length s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
	/*keep calling function adding 1 till null*/
	s++;
	return (_strlen_recursion(s) + 1);
	}
}
