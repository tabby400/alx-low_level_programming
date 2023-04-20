#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints strings
 *
 * @n: the number of strings passed in the function
 * @separator: the string to be printed between other strings
 * @...: the variable number of strings printed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	va_list allstring;
	unsigned int p;

	va_start(allstring, n);

	for (p = 0 ; p < n ; p++)
	{
		string = va_arg(allstring, char *);

		if (string != NULL)
		{
			printf("%s", string);
		}
		else
			printf("(nil)");

		if (separator != NULL && p != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(allstring);

}
