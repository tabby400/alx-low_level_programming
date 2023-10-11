#include "search_algos.h"

/**
 * interpolation_search - this function searches for a value
 * in a sorted array of ints using interpolation search algo
 *
 * @array: the array array
 * @size: the size of the array
 * @value: the value to look for
 * Return: the index of the number
 *
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t p;
	size_t n;
	size_t m;

	if (array == NULL)
		return (-1); /*if array no exist*/

	for (n = 0, m = size - 1 ; m >= n ;)
	{
		p = n + (((double)(m - n) / (array[m] - array[n])) * (value - array[n]));
		if (p < size)
			printf("Value checked array[%ld] = [%d]\n", p, array[p]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", p);
			break;
		}

		if (array[p] == value)
			return (p);
		if (array[p] > value) /* if what found is greater than the val*/
			m = p - 1; /* on left side*/
		else
			n = p + 1; /*on roght side look*/
	}

	return (-1);
}
