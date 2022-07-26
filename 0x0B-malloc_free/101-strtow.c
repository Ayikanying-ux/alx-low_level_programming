#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * count_words - counts separate words in string
 * @str: point to s
 * Return: number of words
 */
int count_words(char *str)
{
	int i, count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

/**
 * _wrdlen - returns the length of a word
 * @s: pointer to s
 * Return: 0 on success
 */
int _wrdlen(char *s)
{
	int count = 0;

	while (*(s + count) != ' ' && *(s + count) != '\0')
		count++;
	return (count);
}

/**
 * strtow - splits a string into words
 * @str: string to break
 * Return: array of strings(words)
 */
char **strtow(char *str)
{
	int i, j, k, h, c, len;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	c = count_words(str);
	if (c == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (c + 1));
	if (words == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' && str[i] != '\0')
			i++;
		if (str[i] == '\0')
		{
			words[j] = NULL;
			return (words);
		}
		words[j] = malloc(sizeof(char) * _wrdlen(str + i) + 1);
		if (words[j] == NULL)
		{
			for (k = j - 1; k >= 0; k--)
				free(words[k]);
			free(words);
			return (NULL);
		}
		len = _wrdlen(str + i);
		for (h = 0; h < len && str[i] != '\0'; h++, i++)
			words[j][h] = str[i];
		words[j][h] = '\0';
		j++;
	}
	words[j] = NULL;
	return (words);
}
