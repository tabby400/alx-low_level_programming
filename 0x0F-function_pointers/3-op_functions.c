#include "3-calc.h"

/**
 * op_add - a function that adds two integers
 * @a: the first integer used in function
 * @b: the second integer used in the function
 *
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that subtracts two integers
 * @a: the first integer used in function
 * @b: the second integer used in function
 *
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplies two integers
 *
 * @a: the first integer to be used in function
 * @b: the second integer to be used in function
 *
 * Return: the result after multiplying a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides two integers
 *
 * @a: the first integer to be used in function
 * @b: the second integer to be used in function
 *
 * Return: the result after division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that gets remainder after two integers
 *          are divided
 * @a: the first integer to be used in function
 * @b: the second integer to be used in function
 *
 * Return: the remainder after two integers are divided
 */
int op_mod(int a, int b)
{
	return (a % b);
}

