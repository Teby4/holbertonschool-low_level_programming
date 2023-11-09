#include "dog.h"
#include "main.h"
#include <stdio.h>

/**
 * init_dog - 
 * Return:
 * @name:
 * @age:
 * @owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
