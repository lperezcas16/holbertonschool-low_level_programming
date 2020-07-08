#include "holberton.h"

/**
 * alloc_grid - Funtion
 *
 * @width: variable
 * @height: variable
 *
 * Return: Always 0
 */
int **alloc_grid(int width, int height)
{
	int **matrix = NULL, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = malloc(sizeof(int) * height);
	if (!matrix)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);
		if (!matrix[i])
		{
			for (j = 0; j <= i; j++)
				free(matrix[j]);

			free(matrix);
			return (NULL);

		}
		for (j = 0; j < width; j++)
			matrix[i][j] = 0;
	}
	return (matrix);
}
