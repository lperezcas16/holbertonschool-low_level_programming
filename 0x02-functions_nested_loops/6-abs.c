#include "holberton.h"

/**
*_abs - Funtion
*
*@n: varible
*
*Return: Always 0
*/

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
