#include "main.h"

/**
 * reverse_array - function reverses array of integers
 * @a: array of integers to be reversed
 * @n: number of elements in array
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int p;

	for (i = 0 ; i < n / 2 ; i++)
	{
		p = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = p;
	}
}
