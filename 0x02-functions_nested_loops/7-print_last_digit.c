#include "holberton.h"

/**
 * print_last_digit - Determine last digit of number
 * @k: The number
 *
 * Description: Determine the last digit of a number
 *
 * Return: The last digit of k
 */
int print_last_digit(int k)
{
	int m;

	m = k % 10;
	if (m < 0)
		m = m * -1;
	_putchar(m + 48);
	return (m);
}
