#include "main.h"

/**
 * _islower - this function checks for character in lowercase
 *
 * @c: parameter that is being checked by function
 *
 * Return: 1 if c is lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
