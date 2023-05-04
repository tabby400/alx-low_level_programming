#include <stdio.h>
#include "main.h"

/**
 * set_bit - function which sets the value of a bit
 *  to 1 at a specific index
 *
 * @n: points to the number to be set to 1
 * @index: the specific index of value to be set to 1
 *
 * Return: 1 if it works, otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
	{
		return (-1);/*assyuming it is a 64bit*/
	}
	else
	{
		*n  ^= (1 << index);
		return (1);
	}
}
