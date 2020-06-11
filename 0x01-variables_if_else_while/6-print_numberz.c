#include <stdio.h>

/**
*main - Entry
*
*Return: Always 0
*/

int main(void)
{
	int num = 0;

	do {
		printf("%d", num++);
		} while (num <= 9);
	return (0);
}
