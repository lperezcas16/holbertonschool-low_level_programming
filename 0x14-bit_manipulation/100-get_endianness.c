#include "holberton.h"
#include <stdint.h>

/**
 * get_endianness - Funtins that search the endian
 *
 * Return: integer
 */
int get_endianness(void)
{
	int i = 1;
	char *endian;

	endian = (char *)&i;

	return (*endian);
}
