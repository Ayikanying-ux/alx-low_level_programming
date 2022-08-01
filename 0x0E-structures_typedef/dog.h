#ifndef DOG_H
#define DOG_H

/**
 * struct dog - creates a new structure of dog
 * @name: struct member name
 * @owner: struct member owner
 * @age: struct member age
 *
 * Description: Creates a structure of name dog and its characteristics
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
