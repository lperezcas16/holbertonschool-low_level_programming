#include "holberton.h"

/**
 * create_array - Funtion
 *
 * @size: variable / unsigned int
 * @c: char
 *
 * Return: Usually 0
 */
char *create_array(unsigned int size, char c)
{
	if (size != 0)
	{
		char *arr = malloc(size * sizeof(c));
		unsigned int i;

		if (!arr)
			return (NULL);
		for (i = 0; i <  size; i++)
			arr[i] = c;
		return (arr);
	}
	else
		return (NULL);

}
