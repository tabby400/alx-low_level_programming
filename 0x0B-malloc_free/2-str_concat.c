#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: one of the strings to join
 * @s2: the other  srting to join
 *
 * Return: memory allocation of the joined strings
 */

char *str_concat(char *s1, char *s2)
{
	int p;
	int r;
	char *ctr;

	/*if NULL is passed treat as empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	p = 0;
	r = 0;
	while (s1[p] != '\0')
		p++;
	while (s2[r] != '\0')
		r++;
	/*allocating memory for joined string*/
	ctr = malloc(sizeof(char) * (p + r + 1));

	if (ctr == NULL)
		return (NULL);
	p = 0;
	r = 0;
	while (s1[p] != '\0')
	{
		ctr[p] = s1[p];
		p++;
	}
	while (s2[r] != '\0')
	{
		ctr[p] = s2[r];
		p++;
		r++;
	}
	/*both strings now joined*/
	ctr[p] = '\0';
	return (ctr);

}
