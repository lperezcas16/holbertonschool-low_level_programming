#include "holberton.h"

/**
 * str_concat - Funtion}
 *
 * @s1: arry
 * @s2: arry
 *
 * Return: Usually 0
 */
char *str_concat(char *s1, char *s2)
{
	char *pnt = NULL;
	int size, size2;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (size = 1; s1[size - 1]; size++)
	;
	for (size2 = 1; s2[size2 - 1]; size2++)
	;
	size = size + size2 - 1;
	pnt = malloc(sizeof(char) * size);

	if (!pnt)
		return (NULL);

	for (size = 0; s1[size]; size++)
		pnt[size] = s1[size];

	for (size2 = 0; s2[size2]; size2++)
		pnt[size + size2] = s2[size2];

	pnt[size + size2] = '\0';
	return (pnt);
}
