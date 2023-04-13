#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - a function that concatenates two strings
 *
 * @s1: the first string to join
 * @s2: the second string to join
 * @n: the bytes from s2
 *
 * Return: the pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concs;
	unsigned int p, s1length, s2length, concslength;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1length = 0 ; s1[s1length] != '\0' ; s1length++)
		;
	for (s2length = 0 ; s2[s2length] != '\0' ; s2length++)
		;
	/* if n is greater than length of s2 use entire string s2*/
	if (n > s2length)
	{
		n = s2length;
	}
	concslength = s1length + n;/*n bytes of s2*/
	/*allocate memory for concatenated string*/
	concs = malloc(concslength + 1);/*assumed size s1 + n bytes in s2*/
	if (concs == NULL)
	{
		return (NULL);
	}
	for (p = 0; p < concslength ; p++)
	if (p < s1length)
	{
		concs[p] = s1[p];
	}
	else
	{
		concs[p] = s2[p - s1length];
	}
	concs[p] = 0;

	return (concs);

}
