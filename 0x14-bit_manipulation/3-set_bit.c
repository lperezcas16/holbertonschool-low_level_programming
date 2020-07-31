#include "holberton.h"

/**
 * set_bit - Function
 * @n: number
 * @index: index
 *
 * Return: integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);
	return (1);
}
