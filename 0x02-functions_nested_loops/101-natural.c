#include <stdio.h>

/**
*main- main
*
*Return: retorno 0
*/

int main(void)
{
	int total = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			total += i;
	}
	printf("%d\n", total);
	return (0);
}
