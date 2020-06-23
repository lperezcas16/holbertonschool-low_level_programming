#include "holberton.h"

/**
*rev_string - Funtion
*
*@s: Variable
*/

void rev_string(char *s)
{
	int i = 0;

	int f = 0;

	int z = 0;

	for (; s[i + 1]; i++)
	{
	}
	while (f < i + 1 / 2)
	{
	z = s[f];
	s[f] = s[i];
	s[i] = z;
	i--;
	f++;
}
}
