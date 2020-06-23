#include "holberton.h"

/**
*swap_int - Funtion
*
*@a: Variable Integer 1
*@b: Variable Integer 2
*/

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
