#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 */
void print_alphabet(void)
{
	char alph;

	alph = 'a';
	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
