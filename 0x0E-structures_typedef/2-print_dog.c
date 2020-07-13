#include "dog.h"
#include <stdio.h>

/**
 * new_dog - Funtion to print
 *
 * @d: Pointer to object
 *
 * Return: 0 
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		d->name != NULL ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n"); 
		printf("Age: %f\n", d->age);
		d->owner != NULL ? printf("Owner: %s\n", d->owner) : 
			printf("Owner: (nil)\n");

	}
}
