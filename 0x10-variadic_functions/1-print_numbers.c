#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print variadic number
 * @separator: char
 * @n:variadic variable count
 * Return :void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator)
			printf("%s", separator);

	}
	printf("\n");
	va_end(ap);
}
