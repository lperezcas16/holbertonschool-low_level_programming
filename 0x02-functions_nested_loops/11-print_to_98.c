#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98
 *
 * @n: starting point
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
		while (n > 98)
			_putnumber(n--);
	if (n < 98)
		while (n < 98)
			_putnumber(n++);
	if (n == 98)
		_putnumber(98);
}

