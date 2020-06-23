#include "holberton.h"

/**
*print_rev - Funtion
*
*@s: Variable char
*/

void print_rev(char *s)
{
	int i = 0;

	for (; s[i + 1]; i++)
	{
	}
	for (; s[i]; i--)
		printf("%c", s[i]);

	printf("\n");
}
