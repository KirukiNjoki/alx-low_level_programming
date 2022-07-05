#ifndef DOG_H
#define DOG_H

/**
 * struct dog - represents a dog with name, age and owner
 * @name: name of dog as string
 * @age: age of the dog as float
 * @owner: owner of the dog as string
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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

