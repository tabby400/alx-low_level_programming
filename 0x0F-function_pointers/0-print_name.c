#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - a function that prints a name using a function pointer
 *
 * @name: the name to be printed
 * @f: the pointer to the function that prints the name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	if (name == NULL)
		return;
	else
		(*f)(name);
}
