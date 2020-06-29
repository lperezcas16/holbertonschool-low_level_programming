#include "holberton.h"

/**
 * _memset - Funtion
 *
 * @s: Pointer
 * @b: Char variable
 * @n: unsigned int i
 *
 * Return: the pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		s[i] = b;
	return (s);
}
