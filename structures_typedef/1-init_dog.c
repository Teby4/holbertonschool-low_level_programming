#include "dog.h"
#include "main.h"
#include <stdio.h>

void init_dog(struct dog *d, char *name, float age, char *owner)
{
struct dog dog_h;
d->name = name;
d->age = age;
d->owner = owner;
}
