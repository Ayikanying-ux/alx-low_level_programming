#include "dog.h"

/**
 * print_dog - prints struct dog
 * @d: dog to print
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	else
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		printf("Owner: %s\n", d->owner);
	}
}
