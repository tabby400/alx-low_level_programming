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
	int i, m, n, q;
	int **arri;

	/*to avoid  0 or negative*/
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		/*allocate memory using pointer to the height first*/
		arri = (int **)malloc(sizeof(int *) * height);
		if (arri == NULL)
		{
			free(arri);
			return (NULL);
		}
		for (i = 0 ; i < height ; i++)
		{
			/*allocating memory using pointer for width*/
			arri[i] = (int *)malloc(sizeof(int *) * width);
			if (arri[i] == NULL)
			{
				for (m = 0 ; m <= i ; m++)
					free(arri[m]);
				free(arri);
				return (NULL);
			}
		}
		for (n = 0 ; n < height ; n++)
		{
			for (q = 0 ; q < width ; q++)
			{
				arri[n][q] = 0;
			}
		}
		return (arri);
	}
}
