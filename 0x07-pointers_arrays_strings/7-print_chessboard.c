#include "holberton.h"

/**
 * print_chessboard - Funtion
 * @a: Matrix
 *
 * Return: 
 */
void print_chessboard(char (*a)[8])
{
	int c, f ,g;

	g = sizeof(a);

	for (c = 0; c < g; c++)
	{
		for (f = 0; f < g; f++)
		{
			_putchar(a[c][f]);
		}
		_putchar('\n');
	}


}
