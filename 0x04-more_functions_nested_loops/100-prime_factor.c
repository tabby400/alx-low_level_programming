#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	long int p;
	long int max;
	long int i;

	p = 612852475143;

	max = -1;

	while (p % 2 == 0)
	{
		max = 2;
		p /= 2;
	}
	for (i = 3 ; i <= sqrt(p) ; i = i + 2)
	{
		while (p % i == 0)
		{
			max = i;
			p = p / i;
		}
	}
	if (p > 2)
		max = p;
	printf("%ld\n", max);
	return (0);
}
