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
	int last;

	last = a % 10;
	return (last);
}
