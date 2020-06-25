#include "holberton.h"

/**
*_strcat - Funtion
*
*@dest: Pointer Variable
*@src: Pointer Variable
*Return: Both Strings
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	for (; dest[i]; i++)
	{
	}
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	i++;
	dest[i] = '\0';
	return (dest);

}
