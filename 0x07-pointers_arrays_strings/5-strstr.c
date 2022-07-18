#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to be found
 * Return: pointer to substring or NULL If not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *found[];

	while(*needle)
	{
		for (i = 0 haystack[i]; i++)
		{
			if (*needle == haystack[i])
			{
				found = *needle
			}
		}
		*needle++;
	}
	return (*found);
}

