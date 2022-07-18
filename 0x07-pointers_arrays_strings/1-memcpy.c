#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest: pointer to copy memory location
 *
 * @src: pointer to copy form
 *
 * @n: the first n bytes
 *
 * Return: Pointer to memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
