#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if ((alph == 'e') || (alph == 'q'))
		{
			continue;
		}
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
