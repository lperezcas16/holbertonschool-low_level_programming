#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - Funtion
 * @haystack: memory area
 * @needle: another memory area
 *
 * Return: always 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *a, *c;
	
	while (*haystack)
	{
		c = haystack;
		a = needle;

		while (*a == *haystack && *a)
		{
			haystack++, a++;
			
		}

		if (*a == '\0')
			return (c);
		haystack = c + 1;
	
	}
	return (0);
}
