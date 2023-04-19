#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - function that executes a function existing as
 *                 parameter on each element of an array
 * @array: the array with some elements in it
 * @size: the size of the array
 * @action: function pointer to the function to be used on each element
 *          array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int p;

	if (action == NULL)
	{
		return;
	}
	if (array == NULL)
	{
		return;
	}
	else
		for (p = 0 ; p < size ; p++)
		{
			(*action)(array[p]);
		}

}
