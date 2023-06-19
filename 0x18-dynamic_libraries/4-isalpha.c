#include "main.h"

/**
 * _isalpha -  function checks alphabetic characters lowercase and uppercase
 *
 * @c: parameter being checked by the function
 *
 * Return: 1 if c is a letter uppercase or lowercase and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
