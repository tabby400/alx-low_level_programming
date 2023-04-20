#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - a function that prints anything
 *
 * @format: the list of type of arguments passed to function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	char *st, *sep = "";
	int r = 0;
	va_list alltype;

	va_start(alltype, format);

	if (format != NULL)
	{
		while (format[r])
		{
			switch (format[r])
			{
				case 'c':
					printf("%s%c", sep, va_arg(alltype, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(alltype, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(alltype, double));
					break;
				case 's':
					st = va_arg(alltype, char *);
					if (st == NULL)
						st = "(nil)";
					printf("%s%s", sep, st);
					break;
					default:
						r++;
					continue;

			}
			sep = ", ";
			r++;
		}
	}
	printf("\n");
	va_end(alltype);
}
