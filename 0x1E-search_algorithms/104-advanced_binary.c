#include "search_algos.h"

/**
 * recursive_search - this function searches in a 
 * recursive way a val in a sorted array
 *
 * @array: points to first element in the array.
 * @left: first index of the [sub]array to look for
 * @right: ending last of the [sub]array to look for.
 * @value: value to search for.
 *
 * Return: index where value is found, or -1
 *	if the value is not exist
 */

int recursive_search(int *array, size_t left, size_t right, int value)
{
	size_t p;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (p = left ; p < right ; p++)
		printf("%d, ", array[p]);
	printf("%d\n", array[p]);

	p = left + (right - left) / 2;
	if (array[p] == value && (p == left || array[p - 1] != value))
		return (p);
	if (array[p] >= value)
		return (recursive_search(array, left, p, value));
	return (recursive_search(array, p + 1, right, value));
}

/**
 * advanced_binary -this function used to kook for value in a
 * sorted arrayusing advanced binary search
 *
 * @array: points to first element of the array
 * @size: no. of elements in array.
 * @value: the value to look for.
 *
 * Return: first index where the value isfound or -1
 *	if the value not exist or the array is NULL.
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (recursive_search(array, 0, size - 1, value));
}
