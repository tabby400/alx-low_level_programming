#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	int q;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	q = n % 10;
	if (q > 5)
		printf("Last digit of %d is %d and is greater than 5", n, q);
	else if (q == 0)
		printf("Last digit of %d is %d and is 0", n, q);
	else if (q < 6 && q != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, q);
	printf("\n");
	return (0);
}
