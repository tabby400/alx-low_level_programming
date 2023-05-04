#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of bits needed
 *            to flip to get from one number to another
 * @n: the current number
 * @m: the number to flib the bits to hget to
 *
 * Return: the number of bits required to flip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipbits = 0;
	unsigned long int resultXOR = n ^ m;

	while (resultXOR > 0)
	{
		flipbits = flipbits + (resultXOR & 1);
		resultXOR >>= 1;
	}

	return (flipbits);
}
