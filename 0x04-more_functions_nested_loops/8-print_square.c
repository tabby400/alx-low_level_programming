#include "main.h"

/**
 * print_square - function that prints square followed by new line
 *
 * @size: size of the square
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int p;

		for (i = 0 ; i < size ; i++)
		{
			for (p = 0 ; p < size ; p++)
			{
				_putchar('#');
			}
			_putchar ('\n');
		}
	}
}
