#include <stdio.h>
#include "main.h"

/**
 * get_bit - function which returns the value of a bit at
 *           a given index
 * @index: where the value is to be found
 * @n: the value of a bit
 *
 * Return: the value of the bit at the specific index
 * otherwise -1, if there is an error
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
	{
		return (-1);/*assuming its of 64 bits*/
	}
	value = (n >> index) & 1;

	return (value);
}
