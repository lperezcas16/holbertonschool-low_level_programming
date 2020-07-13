#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Free the dog malloc
 * @d: pointer to dog
 * Return: none
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
