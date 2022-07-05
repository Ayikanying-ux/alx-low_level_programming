#include <stdio.h>
#include "main.h"

/**
 * main - print alphabet in small letters followed by a new line
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch < 'z')
	{
		_putchar(ch);
	}
	_putchar('\n');
}
