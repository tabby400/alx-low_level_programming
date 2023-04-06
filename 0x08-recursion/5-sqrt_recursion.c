#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - function returns natural square root of a number
 *
 * @n: number to get square root
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	/*negative numbers dont have natural square roots*/
	if (n < 0)
	{
		return (-1);
	}
	else
		return (_sqrt(n, 0));
}

/**
 * _sqrt - function recurses to find natural square root
 *         of a number
 *
 * @n:the number in which we find square root
 * @i: starts the iteration
 *
 * Return: square root
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
		return (_sqrt(n, i + 1));
}
