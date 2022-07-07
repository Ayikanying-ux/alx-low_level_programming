#include "main.h"

/**
 * _isupper - checks if c in capital letter or not
 *
 * @c: integer to check
 *
 * Return: 1 if true, 0 if false
 */
int _isupper(int c)
{
	if (c >= "A" && c <= "Z")
		return (1);
	return (0);
}
