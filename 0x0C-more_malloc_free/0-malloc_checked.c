#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - returns pointer to allocated memory
 * @b: number of bytes to be allocated
 * Returns: returns a void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
