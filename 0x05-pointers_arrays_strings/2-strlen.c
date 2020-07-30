#include  "holberton.h"

/**
*_strlen - Funtion that return the lenght of a String
*
*@s: String
*Return: Return the lenght
*/

int _strlen(char *s)
{
	int lenght;

	for (lenght = 0; *s; s++)
		lenght++;

	return (lenght);

}
