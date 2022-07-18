#include "main.h"

/**
 * _strspn - gets the length of the prefix substring
 *
 * @s: string to be scanned
 *
 * @accept: string containing the characters to match
 *
 * Return: the length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int counter, i;
	
	counter = 0;
	for (i = 0; i != '\0'; i++)
	{
		if (*(s + i) == *(accept + i))
			counter++;
	}
	return (counter);
}
