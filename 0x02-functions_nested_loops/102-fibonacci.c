#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers startinw with 1 and 2
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int run;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (run = 0 ; run < 50 ; run++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;
		if (run == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);

}
