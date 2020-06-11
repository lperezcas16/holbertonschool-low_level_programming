#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar (c);
		c = c + 1;
	}
	putchar ('\n');

	return (0);
}
