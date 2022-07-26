#include "main.h"
#include <stdlib.h>

/**
 * _length - returns length of string
 * @s: char string
 * Return: Length of string s
 */
int _length(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *copy;
	char *_copy;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	copy = malloc(sizeof(char) * (_length(s1) + _length(s2)) + 1);
	if (!_copy)
		return (NULL);
	_copy = copy;
	while (*s1)
	{
		*_copy = *s1;
		_copy++;
		s1++;
	}
	while (*s2)
	{
		*_copy = *s2;
		_copy++;
		s2++;
	}
	*_copy = '\0';
	return (_copy);
}

