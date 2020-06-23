#include "holberton.h"

/**
 * puts_half - main function.
 * @str: Pointer, the string of numbers to print.
 *
 * Description: This function prints half of a string.
 *
 * Return: none.
 */

void puts_half(char *str)
{
	int i;

	for (; str[i]; i++)
	{
		if (i >= 5)
		{
			_putchar(str[i]);
		}

	}
	_putchar('\n');
}
