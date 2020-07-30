#include "holberton.h"

/**
 * binary_to_uint - Function that convert into unsigned int
 *
 *@b: String
 * Return: the unsigned number
 */
unsigned int binary_to_uint(const char *b)
{
	int result = 0, count = 0, pow = 1;

	if (!b)
		return (0);

	while (b[count])
		count++;
	count--;
	while (count >= 0)
	{
		if (b[count] != '1' && b[count] != '0')
			return (0);

		result += (b[count] - 48) * pow;
		pow *= 2;
		count--;
	}
	return (result);
}

