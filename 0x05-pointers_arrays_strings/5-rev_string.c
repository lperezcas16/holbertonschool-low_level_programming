#include "holberton.h"

/**
*rev_string - Funtion
*
*@s: Variable
*/

void rev_string(char *s)
{
	char *tmp = s;

	while (tmp[1])
	tmp++;
	while (tmp[0])
	_putchar(tmp[0]), tmp--;
}
