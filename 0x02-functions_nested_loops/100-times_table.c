#include "holberton.h"
/**
 * print_times_table - times table to 9
 * @n: - argument for the function
 * Description - times tables to 9
 * return: void
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n > 0 && n < 15)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar('0');
			for (i = 1; i <= n; i++)
			{
				k = i * j;
				if (k > 9 && k <= 99)
				{
				_putchar(','); _putchar(' '); _putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
				}
				else if (k < 10)
				{
				_putchar(','); _putchar(' '); _putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
				}
				else
				{
				_putchar(','); _putchar(' ');
				_putchar(k / 100 + '0');
				_putchar(k / 10 % 10 + '0');
				_putchar(k % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
