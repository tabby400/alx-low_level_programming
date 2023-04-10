#include <stdio.h>
#include "main.h"

/**
 * main - program that prints all arguments it receives
 *
 * @argc: the number of arguments in program
 * @argv: the arguments passed in the program
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int p = 0;

	for (p = 0 ; p < argc ; p++)
	{
		printf("%s\n", argv[p]);
	}
	return (0);

}
