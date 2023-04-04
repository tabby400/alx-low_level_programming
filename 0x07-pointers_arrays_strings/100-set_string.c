#include "main.h"

/**
 * set_string - function that sets value of a pointer to char
 *
 * @s:the pointer
 * @to: the char value to be set to pointer
 *
 * Return: 0
 */

void set_string(char **s, char *to)
{
	*s = to;
}
