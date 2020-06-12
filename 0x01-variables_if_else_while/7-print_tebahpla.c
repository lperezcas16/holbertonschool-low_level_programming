#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
{
		putchar (c);
		c = c - 1;
	}

	putchar ('\n');
	return (0);
}
