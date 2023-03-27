#include "main.h"

/**
 * puts2 - prints every other character of string
 *
 * @str: character to be printed
 *
 * Return: 0
 */

void puts2(char *str)
{
	int longi = 0;
	int p = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	p = longi - 1;
	for (o = 0 ; o <= p ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
