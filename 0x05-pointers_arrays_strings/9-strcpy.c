#include "holberton.h"
/**
  * _strcpy - copies a string
  * @dest: destionation string
  * @src: source string
  * Return: destination
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
