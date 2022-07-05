#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @a: the int to extract the last digit from
 *
 * Return: value of the last digit
 */
int print_last_digit(int a)
{
	int i;

	if (a < 0)
	{
		a = -a;
		i = a % 10;
	}
	else
	{
		i = a % 10;
	}
	if (i < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
