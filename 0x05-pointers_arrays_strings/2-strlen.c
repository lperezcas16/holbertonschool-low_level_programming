#include  "holberton.h"

/**
*_strlen - Funtion
*
*@s: Variable
*Return: Return the lenght
*/

int _strlen(char *s)
{
	int lenght;

	for (lenght = 0; *s != '\0'; s++)
		lenght++;

	return (lenght);

}
