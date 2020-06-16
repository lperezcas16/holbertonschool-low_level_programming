#include "holberton.h"
#include <stdio.h>

/**
*print_to_98 - Funtion
*
*@n: Variable
*Return: return
*/

void print_to_98(int n)
{

	int i = 0;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i == 98)
				printf("\n");
			else
				printf(", ");


		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i == 98)
				printf("\n");
			else
				printf(", ");
		}
	}


}
