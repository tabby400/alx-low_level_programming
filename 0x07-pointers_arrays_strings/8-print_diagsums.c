#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function prints sum of two diagonals
 * of square matrix of integers
 *
 * @a: integers in the square
 * @size: the size of square
 *
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int p, sumofint1, sumofint2;

	sumofint1 = 0;
	sumofint2 = 0;

	for (p = 0 ; p < size ; p++)
	{
		sumofint1 += a[p];
		a += size;
	}
	a -= size;

	for (p = 0 ; p < size ; p++)
	{
		sumofint2 += a[p];
		a -= size;
	}
	printf("%d, %d\n", sumofint1, sumofint2);

}
