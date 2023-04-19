#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - shows the outcome of operations
 *
 * @argc: the number of argumemts given to program
 * @argv: the array of function pointers to the arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	char *op;
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
