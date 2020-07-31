#include "holberton.h"

/**
 * flip_bits - Funtin swap bits
 * @n: integer 1
 * @m: index 2
 *
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int aux = n ^ m, i = 0;

	while ((aux ^ 0))
	{
		if ((aux & 1) != 0)
			i++;
		aux = i >> 1;
	}
	return (i);

}
