#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - Check
 *
 * @str: Pointer
 *
 * Return: Always 0
 */
char *_strdup(char *str)
{
	int c = 0, i = 0;

	char *d;

	if (!str)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
		c++;
	}
	c = 0;
	d = malloc(sizeof(char) * (i + 1));
	if (!d)
		return (NULL);
	while (c < (i + 1))
	{
		d[c] = str[c];
		c++;
	}
	if (!str)
		return (NULL);
	return (d);

}
/**
 * new_dog - Create new dog
 *
 * @name: new dog's name
 * @age: new dog's age
 * @owner: new owner
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *namecp;
	char *ownercp;

	ownercp = _strdup(owner);
	namecp = _strdup(name);
	if (!ownercp || !namecp)
	{
		free(ownercp);
		free(namecp);
		return (NULL);
	}
	new = malloc(sizeof(struct dog));
	if (!new)
	{
		free(ownercp);
		free(namecp);
		return (NULL);
	}
	new->name = namecp;
	new->age = age;
	new->owner = ownercp;
	return (new);

}
