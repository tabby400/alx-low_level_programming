#include "main.h"

/**
 * _abs - fuction that prints absolute value of integer
 *
 * @p: parameter to be checked by function
 *
 * Return: Always p
 */

int _abs(int p)
{
	if (p < 0)
		p = -(p);
	else if (p >= 0)
		p = p;
	return (p);
}
