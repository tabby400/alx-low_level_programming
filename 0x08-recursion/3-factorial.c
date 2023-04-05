#include "main.h"

/**
 * factorial - function returns the factorial of given number
 *
 * @n: number in which we get factorial
 *
 * Return: the factorial of number n
 */

int factorial(int n)
{
	if  (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (n * factorial(n - 1));
}
