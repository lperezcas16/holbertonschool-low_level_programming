#include "holberton.h"

/**
*_puts - Funtion that print charaters in the String
*
*@str: the string
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	_putchar('\n');
}
