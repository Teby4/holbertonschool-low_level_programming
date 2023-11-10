#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print dog
 * Return:
 * Description:
 * @dog: dog struct
 * @d: shortcut for dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
		{
		printf("Name: %s\n", d->name);
		}
		if (d->name == NULL)
		{
		printf("Name: (nil)\n");
		}

		if (d->age >= 0)
                {
                printf("Age: %.10f\n", d->age);
                }

		if (d->owner)
                {
                printf("Owner: %s\n", d->owner);
                }
                if (d->owner == NULL)
                {
                printf("Owner: (nil)\n");
                }
	
	}


}
