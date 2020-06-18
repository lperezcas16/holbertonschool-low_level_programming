#include "holberton.h"

/**
 * print_number - check for numbers
 *
 * @n: Value of input number
 */
void print_number(int n)
{
	unsigned int c_digit, ten_pow, a, print_n;
	unsigned int num = n;

	c_digit = 0;
	if (n < 0)
	{
		_putchar('-');
		num = num * -1;
	}
	while (n != 0)
	{
		n = n / 10;
		c_digit++;
	}
	if (c_digit >= 1)
	{
		ten_pow = 1;
		for (a = 1; a < c_digit; a++)
			ten_pow *= 10;
		while (ten_pow >= 1)
		{
			print_n = (num / ten_pow) % 10;
			_putchar(print_n + '0');
			ten_pow = ten_pow / 10;
		}
	}
	else
		_putchar('0');
}
