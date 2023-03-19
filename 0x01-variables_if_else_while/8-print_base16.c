#include <stdio.h>

/**
 * main - entry point of a function
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;
	char t;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (t = 'a' ; t <= 'f' ; t++)
		putchar(t);
	putchar('\n');
	return (0);
}
