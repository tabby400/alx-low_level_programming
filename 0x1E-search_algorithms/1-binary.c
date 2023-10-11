#include "search_algos.h"

/**
 * binary_search - this function searches for int in an array
 * which is sorted
 *
 * @array:  the specific array of integers
 * @size: the size of the array
 * @value: value  int to look for
 *
 * Return: index of value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t p;

	size_t right, left;

	if (array == NULL)  /* if the array exists*/
		return (-1);

	for (left = 0, right = size - 1 ; right >= left ;)
	{
		printf("Searching in array: ");
		for (p = left ; p < right ; p++)
			printf("%d, ", array[p]);
		printf("%d\n", array[p]);

		p = left + (right - left) / 2;
		if (array[p] == value) /*if found print it*/
			return (p);
		if (array[p] > value)
			right = p - 1; /*middle is greater so look on left*/
		else
			left = p + 1;
	}

	return (-1);
}
