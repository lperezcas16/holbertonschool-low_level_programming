#include "holberton.h"

/**
*rev_string - Funtion
*
*@s: Variable
*/

void rev_string(char *s)
{
	int i = 0;

	int i2 = 0;

	int new = 0;

	for (; s[i + 1]; i++)
	{
	}
	while (i2 < i + 1 / 2)
	{
	new = s[i2];
	s[i2] = s[i];
	s[i] = new;
	i--;
	i2++;
}
}
