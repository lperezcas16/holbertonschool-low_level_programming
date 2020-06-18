#include "holberton.h"

/**
*_isdigit - funtion
*
*@c: variable
*Return: 1 if is digit or 0 if not
*/

int _isdigit(int c)
{	
	if ((c >= '0') && (c <= '9')) 
		return (1);
	else
		return (0);
}
