#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints the opcodes of its own
 *          main function
 * @argc: this the number of argumrnts in program
 * @argv: this includes the arguments ppassed in the program
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int p;
	char *array;
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	p = atoi(argv[1]);

	if (p < 0)/*if number of bytes is negative print error*/
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)&main;

	for (n = 0 ; n < p ; n++)
	{
		if (n == p - 1)
		{
			printf("%.2hhx\n", array[n]);
			break;
		}
		printf("%.2hhx ", array[n]);
	}

	return (0);

}
