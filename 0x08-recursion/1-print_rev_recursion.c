#include "main.h"

/**
 * _print_rev_recursion - function prints a string in reverse
 *
 * @s: string to print
 *
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	/*if character is null go back*/
	if (*s == '\0')
	{
		return;
	}
	else
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
