#include "main.h"
#include <stdlib.h>

/**
 * _str_len - caculates length of a string
 * @s: string passed
 * Return: Length of string passed
 */
int _str_len(char *s)
{
	char *p = s;

	while (*s)
	{
		s++;
	}
	return (s - p);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: destination string
 * @s2: source string
 * @n: number of bytes from s2 to be copied
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1, len2, size, i, j;

	len1 = _str_len(s1);
	len2 = _str_len(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s1 = "";
	if (n >= len2)
		n = len2;
	size = len1 + n;
	ptr = malloc(sizeof(char) * size + 1);
	if (!ptr)
		return ('\0');
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < len2; j++)
		ptr[i] = s2[j];
	ptr[i] = '\0';
	return (ptr);
}
