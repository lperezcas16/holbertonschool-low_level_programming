#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, i2;

	for (i = '0'; i <= '9'; i++)
	{
		for (i2 = '0'; i2 <= '9'; i2++)
		{
			putchar(i);
			putchar(i2);
			if (i == '9' && i2 == '9')
			{
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
