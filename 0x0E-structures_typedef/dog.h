#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains a dog's info
 * @name: Dog's name
 * @age: DOg's age
 * @owner: Dog's owner
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
