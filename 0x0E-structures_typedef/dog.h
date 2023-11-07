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

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
