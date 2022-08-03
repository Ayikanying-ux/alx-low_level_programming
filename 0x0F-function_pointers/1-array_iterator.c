#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @array: array passed to the function
 * @size: size of array
 * @action: pointer to function
 * Return: zero
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(arrary[i]);
		}
	}
}
