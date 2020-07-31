#include "holberton.h"
/**
 * decimal_binary - print in binary with bitwise operator
 * @n: decimal number
 * Return: void - just prints
 */
void decimal_binary(unsigned long int n)
{
	if (n == 0)
		return;

	decimal_binary(n >> 1);
	n = n & 1;
	_putchar(n + 48);
	//0001 = 1
}

/**
 * print_binary - Function convert into binary
 * @n: number to convert 
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		decimal_binary(n);
	
}
