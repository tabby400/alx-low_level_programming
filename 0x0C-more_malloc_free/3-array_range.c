#include  "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 *
 * @min: the minimun values in the array
 * @max: the maximum values in the arrays
 *
 * Return: the pointer to the array
 */

int *array_range(int min, int max)
{
	int p, q;
	int *intarr;

	if (min > max)
	{
		return (NULL);
	}
	intarr = malloc(sizeof(int) * (max - min + 1));

	if (intarr == NULL)
	{
		return (NULL);
	}
	q = min;
	p = 0;

	while (p <= max - min)
		intarr[p++] = q++;
	return (intarr);
}
