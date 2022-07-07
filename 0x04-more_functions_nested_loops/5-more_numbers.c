#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; i <= 15; j++)
			_putchar(j);
	}
	_putchar('\n');
}
