#include "holberton.h"

/**
*swap_int - Funtion that swap the value into 2 pointers
*
*@a: pointer Integer 1
*@b: pointer Integer 2
*/

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
