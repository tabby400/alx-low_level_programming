#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers
 *                and followed by a new line
 * @separator: the string to be printed in between the
 *             integers
 * @n: this is the number of intergers passed in the function
 * @...: the numbers that are to be printed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int p;
	va_list allnum;

	va_start(allnum, n);

	for (p = 0 ; p < n ; p++)
	{
		printf("%d", va_arg(allnum, int));/*even the string*/

		/*printing separator between numbers*/
		if (separator != NULL && p != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(allnum);
}
