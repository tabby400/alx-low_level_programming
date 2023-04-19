#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer in array
 *
 * @array: the array with integers as elements
 * @size: the size of the array which is total number of elements
 * @cmp: is the pointer to the function used to compare the integers
 *       in the array
 *
 * Return: index of the first element which the cmp function does
 *         does not return 0, if no element matches return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int p;

	if (array == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	if (cmp == NULL)
	{
		return (-1);
	}

	for (p = 0 ; p < size ; p++)
	{
		if ((*cmp)(array[p]))
		{
			return (p);
		}
	}
	return (-1);
}
