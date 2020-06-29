#include "holberton.h"

/**
 * _strchr - Funtion
 *
 *@s: Pointer
 *@c: Variable
 *
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');

}
