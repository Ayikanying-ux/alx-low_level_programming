#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return: (Success)
 */
int main(void)
{
	unsigned long int i;
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c = 1000000000;
	unsigned long int d;
	unsigned long int e;
	unsigned long int f;
	unsigned long int g;

	printf("%lu", a);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", b);
		b += a;
		a = b - a;
	}
	d = (a / 1);
	e = (a % 1);
	f = (b / 1);
	g = (b % 1);
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", f + (g / c));
		printf("%lu", g % 1);
		f = f + d;
		d = f - d;
		g = g + e;
		e = g - e;
	}
	printf("\n");
	return (0);
}

	
