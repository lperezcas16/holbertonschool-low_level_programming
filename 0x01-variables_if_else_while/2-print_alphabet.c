#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	char c = 'a';

	for (;c <= 'z'; c++)
		putchar (c);
	putchar ('\n');
	return (0);
}
