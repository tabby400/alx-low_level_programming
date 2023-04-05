#include "main.h"

/**
 * _pow_recursion - function raises value of x to power of y
 *
 * @x: value to raise to power of y
 * @y: power of
 *
 * Return: result after power of y on value x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
