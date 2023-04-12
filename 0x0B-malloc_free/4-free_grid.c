#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees the 2 dimensional array
 *                cireated in alloc grid
 * @grid: the 2 dimensional grid
 * @height: the height of the two dimensional grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int p;

	for (p = 0 ; p < height ; p++)
	{
		free(grid[p]);
	}
	free(grid);
	if (grid == NULL)
	{
		return;
	}
}
