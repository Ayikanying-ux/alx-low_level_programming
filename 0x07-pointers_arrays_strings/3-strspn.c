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
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				counter++;
			else if (accept[i + 1] == '\0')
				return (counter);
		}
		s++;
	}
	return (counter);
}
