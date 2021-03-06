#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Funtion
 *
 * @str: Variable pointer
 *
 * Return: Usually 0
 */
char *_strdup(char *str)
{
	char *ptn = NULL;
	int size;

	if (!str)
		return (NULL);
	for (size = 1; str[size - 1]; size++)
	;

	ptn = malloc(sizeof(char) * size);

	if (!ptn)
		return (NULL);
	for (size = 0; str[size]; size++)
		ptn[size] = str[size];
	ptn[size] = '\0';
	return (ptn);

}
