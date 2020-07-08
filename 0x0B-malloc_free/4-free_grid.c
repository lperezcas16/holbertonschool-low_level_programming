#include "holberton.h"

/**
 * free_grid - Funtion
 *
 * @grid: variable
 * @height: variable
 *
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);

}
