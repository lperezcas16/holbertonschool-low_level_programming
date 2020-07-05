#include "holberton.h"

/**
 *_puts - Funtion
 *
 *@str: Variable
 */

void _puts(char *str)
{
		int i;

			for (i = 0; str[i]; i++)
						_putchar(str[i]);

				_putchar('\n');
}
