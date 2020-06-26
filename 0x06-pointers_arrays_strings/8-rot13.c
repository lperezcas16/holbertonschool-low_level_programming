#include "holberton.h"
/**
 * rot13 - encodes a string using rot13
 * @c: char to encode
 * Return: char encoded
*/
char *rot13(char *c)
{
	int i = 0;
	int j = 0;
	char one[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char two[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; c[i]; i++)
	{
		for (; one[j]; j++)
		{
			if (c[i] == one[j])
			{
				c[i] = two[j];
				break;
			}
		}
	}
	return (c);
}
