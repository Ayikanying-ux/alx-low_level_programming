#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name to be printed
 * @f: function to print with
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
