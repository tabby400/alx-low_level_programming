#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that is able to print anything
 *
 * @format: the list of types of arguments passed
 * @...: a variable number of anything that can be printed
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	char *st, *sep = "";
	int p = 0;

	va_list any;

	va_start(any, format);

	if (format != NULL)
	{
		while (format[p])
		{
			switch (format[p])
			{
				case 'c':
					printf("%s%c", sep, va_arg(any, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(any, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(any, double));
					break;
				case 's':
					st = va_arg(any, char *);
					if (st == NULL)
						st = "(nil)";
					else
					printf("%s%s", sep, st);
					break;
				default:
					p++;
					continue;
			}
			sep = ", ";
			p++;
		}
	}
	printf("\n");
	va_end(any);
}
