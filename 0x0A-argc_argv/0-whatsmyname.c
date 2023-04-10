#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name followed by new line
 *
 * @argc: shows the number of arguments passed in program
 * @argv: shows the arguments passed in the program
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
