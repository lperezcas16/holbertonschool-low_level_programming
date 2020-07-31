#include "holberton.h"

/**
 * get_bit - Funtion
 * @n: number
 * @index: index
 *
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((index >= (sizeof(unsigned long int) * 8)) ?
			-1 : (((1 << index) & n) == 0) ? 0 : 1);
}
