#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints struct dog
 * @d: dog to print
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("%s", d-name);
		else
			printf("(nil)");
		printf('\n');
		if (d->age)
			printf("%f", age);
		else
			printf("(nil)");
		printf('\n');
		if (d->owner)
			printf("%s", d->owner);
		else
			printf("(nil)");
		printf('\n');
	}
}
