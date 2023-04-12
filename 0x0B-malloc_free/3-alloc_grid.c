#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - the function returns a pointer to a 2 dimensional
 *              array of integers
 * @height: the height of 2 dimensional array
 * @width: the width of the 2 dimensional array
 *
 * Return: a pointer to the 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int p;
	int b;
	int **arri;

	/*avoiding negative numbers*/
	if (width < 0)
		return (NULL);
	if (height < 0)
		return (NULL);

	arri = (int **)malloc(sizeof(int *) * height);
	if (arri == NULL)
	{
		return (NULL);
	}
	for (p = 0 ; p < height ; p++)
	{
		arri[p] = (int *) malloc(sizeof(int) * width);

		if (arri[p] == NULL)
		{
			free(arri);
			for (b = 0; b <= p ; b++)
				free(arri[b]);
			return (NULL);
		}
	}
	for (p = 0 ; p < height ; p++)
	{
		for (b = 0 ; b < width ; b++)
		{
			arri[p][b] = 0;
		}
	}
	return (arri);

}
