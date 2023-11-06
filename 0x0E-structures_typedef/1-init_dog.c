#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of typpe struct dog
 * @d: Pointer
 * @name: Dog's name
 * @age: Element 2
 * @owner: Element 3
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
