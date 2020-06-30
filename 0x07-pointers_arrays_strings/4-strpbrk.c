#include "holberton.h"

/**
 * _strpbrk - Funtion
 * @s: Pointer
 * @accept: Pointer
 *
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
