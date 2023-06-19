#include "main.h"

/**
 * _abs - fuction that prints absolute value of integer
 *
 * @n: parameter to be checked by function
 *
 * Return: Always n
 */

int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n >= 0)
		n = n;
	return (n);
}
