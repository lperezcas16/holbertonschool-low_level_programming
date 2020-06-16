#include "holberton.h"
/**
 * print_last_digit - function 
 *
 * @c: variable
 * Return: return 0
 */
int print_last_digit(int c)
{
	int lastDigit = c % 10;

	if (c < 0)
	{
		lastDigit = lastDigit * -1;
	}
	_putchar (lastDigit + '0');
	return (lastDigit);
}
