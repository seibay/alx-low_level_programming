#include "main.h"

/**
 * print_rev - prints a string, in reverse
 *
 * @s: a string to be printed in reverse
 */
void print_rev(char *s)
{
	int l;
	int k;

	l = 0;
	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (k = l; k > 0; k++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
