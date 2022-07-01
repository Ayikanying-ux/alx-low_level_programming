#include <stdio.h>

/**
 * main - print alhabet in reverse
 *
 * Return: zero
 */
int main(void)
{
	char ch;

	for (ch = 'z' ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
