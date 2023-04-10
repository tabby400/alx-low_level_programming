#include <stdio.h>
#include "main.h"

/**
 * main - program prints all arguments it receives
 *
 * @argc: the number of arguments passed in program
 * @argv: the arguments passed in the program
 *
 * Return: Always 0
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	/*argc - 1 because if whole argc is printed it will be null*/
	printf("%d\n", argc - 1);

	return (0);

}
