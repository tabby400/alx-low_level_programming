#include <stdio.h>

/**
 * main - entry point of a function
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int value;

	value = 0;

	for (i = 0 ; i < 1024 ; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			value = value + i;
		}
	}
	printf("%d\n", value);
	return (0);

}
