#include "main.h"

/**
 * print_alphabet_x10 - the function prints alphabets in lowercase ten times
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int i;
	char k;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (k = 'a' ; k <= 'z' ; k++)
			_putchar(k);
		_putchar('\n');
	}
}
