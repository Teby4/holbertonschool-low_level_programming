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
		printf("(nil)")
		}

		if (d->age)
                {
                printf("Age: %.2f\n", d->age);
                }
                if (d->age == NULL)
                {
                printf("(nil)")
                }

		if (d->owner)
                {
                printf("Owner: %s\n", d->owner);
                }
                if (d->owner == NULL)
                {
                printf("(nil)")
                }
	
	}


}
