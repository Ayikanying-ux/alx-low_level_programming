#include "main.h"
#include <stdio.h>

/**
 * free_grid - frees a 2 dimentional grid previously
 * created by the alloc_grid function
 * @grod: double pointer to multi-dimen array
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(gird[i]);
	free(grid);
}
