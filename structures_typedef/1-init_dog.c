#include "dog.h"
#include "main.h"
#include <stdio.h>

void init_dog(struct dog *d, char *name, float age, char *owner)
{
struct dog dog_t;
dog_t.name = name;
dog_t.age = age;
dog_t.owner = owner;

return (dog_t);
}
