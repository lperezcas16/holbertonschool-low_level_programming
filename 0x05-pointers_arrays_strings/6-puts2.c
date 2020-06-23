#include "holberton.h"

/**
* puts2 - prints a string
*
* @str: character
*/
void puts2(char *str)
{
	int i;

	while (str[i])
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
