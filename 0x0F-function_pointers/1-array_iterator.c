#include "function_pointers.h"

/**
 * array_iterator - executes a func
 * @array: array passed to the function
 * @size: size of array
 * @action: pointer to function
 * Return: zero
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
