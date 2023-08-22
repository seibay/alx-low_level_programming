#include "main.h"

/**
 * print_rev - prints a string, in reverse
 *
 * @s: a string to be printed in reverse
 */
void print_rev(char *s)
{
	int length;
	int i;

	if (s == NULL)
	{
		return;
	}
	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
