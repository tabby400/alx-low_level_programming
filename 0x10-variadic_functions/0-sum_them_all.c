#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its
 *               all its parameters
 * @n: the arguments passed in the function so far
 * @...: the rest of the parameters to be passed
 *
 * Return: the sum of all the  parameters passed
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int p;
	va_list myint;
	int result = 0;

	va_start(myint, n);

	for (p = 0 ; p < n ; p++)
	{
		result = result + va_arg(myint, int);
	}

	va_end(myint);
	return (result);
}
