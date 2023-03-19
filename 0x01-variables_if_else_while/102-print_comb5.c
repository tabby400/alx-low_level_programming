#include <stdio.h>

/**
 * main - entry point prints all possible combinations of two two digit numbers
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;
	int p;

	for (i = 0 ; i < 100 ; i++)
	{
		for (p = 0 ; p < 100 ; p++)
		{
			if (i < p)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((p / 10) + '0');
				putchar((p % 10) + '0');
				if (i != 98 && p != 99)
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
