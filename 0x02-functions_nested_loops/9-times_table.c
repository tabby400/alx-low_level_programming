#include "main.h"

/**
 * times_table - function that prints nine times table
 *
 * Return: Always 0 (success)
 */

void times_table(void)
{
	int i;
	int p;
	int k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (p = 0 ; p < 10 ; p++)
		{
			k = i * p;
			if (p == 0)
			{
				_putchar(k + '0');
			}
			if (k < 10 && p != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
