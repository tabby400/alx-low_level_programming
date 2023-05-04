#include "main.h"
#include <stdlib.h>

/**
 * print_binary - function which prints the binary representation
 *                of a number
 * @n: the number to be printed in binary form
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int now;
	int p;
	int total = 0;

	for (p = 63 ; p >= 0 ; p--)
	{
		now = n >> p;
		if (now & 1)
		{
			_putchar('1');
			total++;
		}
		else if (total)
		{
			_putchar('0');
		}
	}
	if (!total)
	{
		_putchar('0');
	}
}
