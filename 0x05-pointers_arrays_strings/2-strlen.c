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
	int i, counter;

	counter = 0;
	for (i = 0; *s[i] != '\0'; i++)
		counter += 1;
	return (counter);

}
