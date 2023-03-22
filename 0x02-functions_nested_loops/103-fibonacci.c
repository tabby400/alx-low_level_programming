#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms less than 4,000,000
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0, p = 1, new = 0;
	int sum = 0;

	while (new < 4000000)
	{
		new = i + p;
		i = p;
		p = new;
		if (new % 2 == 0)
		{
			sum += new;
		}
	}
	printf("%i\n", sum);
	return (0);
}

