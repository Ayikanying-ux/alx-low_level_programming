#include "main.h"

/**
 * _strlen - prints lenghth of string
 *
 * @s: pointer to be used
 *
 * Return: counter
 */
int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (*s != '\0')
		counter += 1;
	return (counter);

}
