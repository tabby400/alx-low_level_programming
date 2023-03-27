#include "main.h"

/**
 * swap_int - swaps value of two integers
 *
 * @a: integer to be swaped
 * @b: integer to be swaped
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
