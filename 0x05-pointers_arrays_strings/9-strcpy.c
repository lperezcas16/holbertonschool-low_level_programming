#include "holberton.h"
/**
  * _strcpy - copies a string
  * @dest: destionation string
  * @src: source string
  * Return: destination
  */
char *_strcpy(char *dest, char *src)
{
	int counter = 0, a = 0;

	while (src[counter])
	{
		counter++;
	}
	for (; a < counter; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
