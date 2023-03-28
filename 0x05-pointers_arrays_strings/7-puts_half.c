#include "main.h"
/**
 * puts_half - function that prints second half of string
 *
 * @str: second half
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int p, n, longi;

	longi = 0;

	for (p = 0; str[p] != '\0'; p++)
		longi++;

	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi - 1) / 2);

	for (p = n; str[p] != '\0'; p++)
		_putchar(str[p]);
	_putchar('\n');

}
