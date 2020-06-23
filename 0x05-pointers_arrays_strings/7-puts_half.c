#include "holberton.h"

/**
*puts_half - Funtion
*
*@str: Variable whit the number
*/

void puts_half(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i >= 5)
		{
			_putchar(str[i]);
		}
		i++;
	}
}
