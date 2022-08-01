#include "dog.h"

/**
 * new_dog - creates a new variable of type struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: A variable of type dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (!p)
		return (NULL);
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
