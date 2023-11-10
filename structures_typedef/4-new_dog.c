#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - new dog
 * Return:
 * Description:
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
	{
	return (NULL);
	}
	new_dog_ptr->name = strdup(name);
	new_dog_ptr->age = age;
	new_dog_ptr->owner = strdup(owner);
}
