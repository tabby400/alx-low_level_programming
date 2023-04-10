#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function that gets multiplication of two numbers
 *
 * @argc: number of arguments in the program
 * @argv: the arguments passed in the program
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int product;

	/*2 args passed to program so argc is 3*/
	if (argc != 3)
	{
		printf("%s\n", "Error");

		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		product = a * b;

		/*to print multiplication*/
		printf("%d\n", product);

		return (0);
	}
}
