#include "dog.h"

/**
 * init_dog - Constructor
 *
 * @d: Dog's object
 * @name: name parameter
 * @age: age parameter
 * @owner: owner parameter
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
