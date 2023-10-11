#include "search_algos.h"

/**
 * linear_search - this function searches for values in an
 * array of integers using linear search algo
 *
 * @array: the array to look for int in
 * @size: size of the array
 * @value: the value to look for
 *
 * Return: -1 if element not in array otherwisr
 * the position of the element in the array
 */

int linear_search(int *array, size_t size, int value)
{
	int p;

	if (array == NULL) /* ensures the array is valid*/
		return (-1);

	for (p = 0 ; p < (int)size ; p++)
	{
		printf("Value checked array[%u] = [%d]\n", p, array[p]);
		if (value == array[p]) /* if value is found in array*/
			return (p);
	}
	return (-1);
}
