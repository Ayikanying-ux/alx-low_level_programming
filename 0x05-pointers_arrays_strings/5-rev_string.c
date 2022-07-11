#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: pointer to string
 *
 * Return: none
 */
void rev_string(char *s)
{
	int i, count;
	char swap;

	if (*s != '\0')
	{
		count = 0;
		while (*(s + count) != '\0')
		{
			count++;
		}
		i = 0;
		count = count - 1;
		while (i <= count)
		{
			swap = *(s + i);     /* swap = first */
			*(s + i) = *(s + count); /* first = last */
			*(s + count) = swap; /* last = swap (first) */
			i++;
			count--;
		}
	}
}
