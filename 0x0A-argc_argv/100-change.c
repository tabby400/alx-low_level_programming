#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum amount of coins to make change
 *        for an amount of money
 * @argc: the number of arguments passed in the program
 * @argv: the arguments that are passed in the program
 *
 * Return: the minimum amount of coins to make change
 */

int main(int argc, char *argv[])
{
	int cents;
	int p;
	int product;
	int unlimcoins[5] = {25, 10, 5, 2, 1};
	
	/*number of arguments passed to program should be 1*/
	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		product = 0;
	}

	/*to make sure number passed is not negative*/
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	product = 0;

	for (p = 0 ; p < 5 && cents >= 0 ; p++)
	{
		while (cents >= unlimcoins[p])
		{
			product++;
			cents -= unlimcoins[p];
		}
	}

	printf("%d\n", product);
	return (0);
}

