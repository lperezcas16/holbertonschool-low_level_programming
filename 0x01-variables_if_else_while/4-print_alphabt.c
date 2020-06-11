#include <stdio.h>

/**
*main- Entry
*
*Return: Always 0
*/

int main(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{

		if (l == 'q' || l == 'e')
		{
			l++;
		}
		putchar (l);
	}
	putchar ('\n');
	return (0);
}
