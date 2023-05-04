#include "main.h"

/**
 * get_endianness - finds whether presentation is in
 *  the big endian system or little endian system
 *
 * Return: 0 for big endian system and 1 for little endian system
 */

int get_endianness(void)
{
	unsigned int p = 1;
	char *endianness = (char *)&p;

	if (*endianness == 1)
	{
		return (1);
	}
	else
		return (0);

}
