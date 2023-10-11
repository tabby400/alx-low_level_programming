#include "search_algos.h"
#include <stddef.h>
#include <math.h>

/**
 * jump_search - this function searches for int in a sorted array
 *
 * @array: points to the first element of the array to look in
 * @size:  elements in array
 * @value: the value to look for
 * Return: index where int is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t p;
	size_t step;
	size_t jump;

	if (array == NULL || size == 0)
		return (-1); /*if value is not there or array NULL*/

	step = sqrt(size); /* to determine the size of blocks to be jumped*/
	for (p = jump = 0 ; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		p = jump;
		jump = jump + step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", p, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; p < jump && array[p] < value ; p++)
		printf("Value checked array[%ld] = [%d]\n", p, array[p]);
	printf("Value checked array[%ld] = [%d]\n", p, array[p]);

	return (array[p] == value ? (int)p : -1);
}
