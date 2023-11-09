#ifndef main_h
#define main_h

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

#ifndef dog_h
#define dog_h

/**
 * struct dog - dog structure
 * @name: name of the dog
 * @age: dogs age
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
