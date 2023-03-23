#include "main.h"

/**
 * print_diagonal - function that drwas diagonal line in terminal
 *
 * @n: number of times \ is printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int p;

		for (i = 0 ; i < n ; i++)
		{
			for (p = 0 ; p < n ; p++)
			{
				if (p == i)
					_putchar('\\');
				else if (p < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
