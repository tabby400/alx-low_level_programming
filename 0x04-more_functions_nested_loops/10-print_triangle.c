#include "main.h"

/**
 * print_triangle - function that prints triangle
 *
 * @size: the size of triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int p;

		for (i = 1 ; i <= size ; i++)
		{
			for (p = i ; p < size ; p++)
			{
				_putchar(' ');
			}
			for (p = 1 ; p <= i ; p++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
