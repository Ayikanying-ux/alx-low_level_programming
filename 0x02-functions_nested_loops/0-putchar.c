#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: write a program that prints "_putchar" followed by a new line.
 *
 * Returns: zero
 */
int main(void)
{
	char word[9] = "_putchar"

	for (int i = 0; i < 8; i++)
	{
		_putchar(word[i]);
		_putchar("\n");
	return (0);
}
