#include "holberton.h"

/**
 * _strspn - Funtion
 *
 *@s: Pointer
 *@accept: Pointer
 * Return: Value
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, p = 0, j = 0, t = 0;
	

	for (; s[i]; i++)
	{
		for (; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				p += 1;
				break;
			}
		}
		if (p == t)
			break;
		t = p;
			

	}
	return (p);

}
