#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;
	int p;

	for (i = 0 ; i < 10 ; i++)
	{
		for (p = 1 ; p < 10 ; p++)
		{
			if (i < p && i != p)
			{
				putchar(i + '0');
				putchar(p + '0');
				if (i + p != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
