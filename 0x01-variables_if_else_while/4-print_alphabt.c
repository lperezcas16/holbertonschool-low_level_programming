#include <stdio.h>

/**
*main - Entry
*
*
*Return: Always 0
*/
int main(void)
{
	char letra;
	for (letra = 'a' ; letra <= 'z' ; letra++)
	{
		if (letra == 'q' || letra == 'e')
		{
			letra++;
		}
	putchar (letra);
	}
	putchar ('\n');
	return (0);
}
