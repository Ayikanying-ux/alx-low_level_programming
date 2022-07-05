#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: program that prints alphabet in small letters
 */
void print_alphabet(void)
{
	char ch = 'a';

	for(ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
