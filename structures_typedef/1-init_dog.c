#include "dog.h"

/**
 * init_dog - initializie the dog function 
 * Return:
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != '\0')
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
