#include "main.h"
#include <stdio.h>

/**
 * _strchr - Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
 *
 * @s: string to be searched
 *
 * @c: target char
 *
 * Return: pointer to first occurrence of c or NULL if char not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (!c)
		return (NULL);
	return (s);
}
