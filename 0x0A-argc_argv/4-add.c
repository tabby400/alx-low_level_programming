#include <stdio.h>
#include "main.h"
#include <stdlib.h>


/**
 * main - program that adds two positive numbers
 *
 * @argc: the number of arguments passed
 * @argv: the arguments passed in the program
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int p;
	int q;
	int r;
	int number;
	int product;


	for (p = 1 ; p < argc ; p++)
	{
		for  (q = 0 ; argv[p][q] != '\0' ; q++)
		{
			/*to get positive numbers and and only digits*/
			if (argv[p][q] < '0' || argv[p][q] > '9')
			{
				printf("%s\n", "Error");
				return  (1);
			}
		}

	}
	/*to get the addition of numbers*/
	for (r = 1 ; r < argc ; r++)
	{
		number = atoi(argv[r]);
		product = product + number;
	}
	printf("%d\n", product);
	return (0);

}
