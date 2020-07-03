#include "holberton.h"

/**
 * _memcpy - Funtion
 *
 * @dest: Pointer
 * @src: Pointer
 * @n: Unsigned int
 * Return: New pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
