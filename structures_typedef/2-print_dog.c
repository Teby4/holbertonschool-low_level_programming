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
	
	}


}
