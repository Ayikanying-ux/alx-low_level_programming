#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
