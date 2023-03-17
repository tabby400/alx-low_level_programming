#include <stdio.h>

/**
 * main - entry point of a function
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;
	int p;
	int n;

	for (i = 0 ; i < 10 ; i++)
	{
		for (p = 1 ; p < 10 ; p++)
		{
			for (n = 2 ; n < 10 ; n++)
			{
				if (i < p && p < n)
				{
					putchar(i + '0');
					putchar(p + '0');
					putchar(n + '0');
					if (i + p + n != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
