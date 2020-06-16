#include "holberton.h"

/**
 * _abs - returns absolute value of parameter
 *
 * @n: int to turn to absolute value
 * Return: returns absolute value
 */
int _abs(int n)
{
	if (n <= 0)
		return (n - (n * 2));
	else
		return (n);
}

/**
 * print_last_digit - prints the last digit of inputted number
 *
 * @n: int to pull last digit from
 * Return: Returns last digit
 */
int print_last_digit(int n)
{
	int last;

	last = _abs(n);
	last %= 10;
	_putchar(last + '0');
	return (last);
}
