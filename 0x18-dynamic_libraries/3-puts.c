#include "main.h"

/**
 * _puts - function prints a string followed by new line
 *
 * @str: string to be printed
 *
 * Return: 0
 */

void _puts(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		_putchar(s[i]);
	_putchar('\n');
}
