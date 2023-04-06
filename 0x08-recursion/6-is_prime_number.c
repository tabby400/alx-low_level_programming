#include "main.h"

int show_prime(int, int);

/**
 * is_prime_number - function that shows if a number is prime number
 *
 * @n: number to find if it is prime or mot
 *
 * Return: 1 if n is a prime number and 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	else
		return (show_prime(n, n - 1));
}

/**
 * show_prime - confims if number is prime or not
 *
 * @n: number to see if its prime or not
 * @i: where the iteration starts
 *
 * Return: 1 if it is prime otherwise 0
 */

int show_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0 && i > 0)
	{
		return (0);
	}
	else
		return (show_prime(n, i - 1));
}
