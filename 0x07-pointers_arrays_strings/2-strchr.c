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
	int i = 0;

	for (; s[i]; i++)
		if (s[i] == c)
			return (s + i);

	return ('\0');

}
