#include "function_pointers.h"

/**
 * print_name - Prints a name
 *
 * @name: String
 * @f: Pointer to funtion
 *
 */
void print_name(char *name, void (*f)(char *))
{

	if (name && f)
		f(name);
}
