#include "main.h"
#include <stdio.h>

/**
 * clear_bit - function which sets the value of a bit to 0
 *             at a specific index
 *
 * @index: starts from 0 and is of the bit you are to set to 0
 * @n: points to the bit to set to 0
 *
 * Return: 1 if successful , otherwise -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)/*assuming its a 64bit*/
	{
		return (-1);
	}
	else
	{
		*n &= ~(1 << index);
		return (1);
	}
}
