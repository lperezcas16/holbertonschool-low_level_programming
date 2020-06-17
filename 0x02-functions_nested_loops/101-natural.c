#include <stdio.h>

/**
*main- main
*
*Return: retorno 0
*/

int main(void)
{
	int total;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			total += i;
	}
	printf("%d", total);
	return (0);
}
