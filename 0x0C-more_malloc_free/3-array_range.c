#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: starting int
 * @max: max int
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int i, len;
	char *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min;
	return (ptr);
}