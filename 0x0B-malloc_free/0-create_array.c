#include "main.h"
#include <stdlib.h>

/**
 * create_array - fuction which creates an array of chars and
 *                initializes with specific char
 * @size: elements present in the array in total
 * @c: char given to array
 *
 * Return: a pointer to the array and NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int p;
	char *s;

	/*space to be created in heap using pointer*/
	s = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	/*returns a pointer there's not NULL*/
	if (s == NULL)
	{
		return (NULL);
	}
	for (p = 0 ; p < size ; p++)
	{
		s[p] = c;
	}
	return (s);
}
