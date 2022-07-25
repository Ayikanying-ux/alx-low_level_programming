#include "main.h"
#include <stdlib.h>

/**
 * _str_length - prints the length
 * @str: pointer to get length
 * Return: length of string
 */
int _str_length(char *str)
{
	int length = 0;

	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 * Return: copied string
 */
char *_strdup(char *str)
{
	char *copy;
	char *_copy;

	if (!str)
		return (NULL);
	copy = malloc((_str_length(str) + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	_copy = copy;
	while (*str)
	{
		*_copy = *str;
		_copy++;
		str++;
	}
	*_copy = '\0';
	return (copy);
}
