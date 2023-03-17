#include <stdio.h>

/**
 * main - entry point of function
 *
 * Return: always 0 (sucess)
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);


}
