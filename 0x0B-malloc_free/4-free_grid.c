#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a two dim grid
 * @grid: the grid
 * @height: the num of rows
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
