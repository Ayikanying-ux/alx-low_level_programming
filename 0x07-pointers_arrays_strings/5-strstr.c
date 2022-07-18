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

	while(*haystack)
	{
		for (i = 0 needle[i]; i++)
		{
			if (*haystack == needle[i])
			{
				found = *haystack;
			}
		}
		*needle++;
	}
	return (*found);
}

