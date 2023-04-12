#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all arguments of your program
 *
 * @ac: the number of arguments in the program
 * @av: the arguments passed in the program
 *
 * Return: a pointer to the new string or NULL ifit fails
 */

char *argstostr(int ac, char **av)
{

	int t;
	int p;
	int q;
	int count;
	char *conc;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	/*number of arguments passed in program will be less than ac*/
	for (t = 0 ; t < ac ; t++)
	{
		for (p = 0 ; av[t][p] != '\0' ; p++)
			count++;
		count++;
	}
	/*allocating memory for concatenated arguments*/
	conc = malloc(sizeof(char) * (count + 1));/*size of arguments*/
	if (conc == NULL)
	{
		return (NULL);
	}
	q = 0;

	for (t = 0 ; t < ac ; t++)
	{
		for (p = 0 ; av[t][p] != '\0' ; p++)
		{
			conc[q] = av[t][p];
			q++;
		}
		conc[q] = '\n';
		q++;
	}
	return (conc);
}
