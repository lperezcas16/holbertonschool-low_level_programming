iinclude "holberton.h"

/**
*print_rev - Funtion
*
*@s: Variable char
*/

void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;

	for (i -= 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
