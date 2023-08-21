#include<stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
*/
int main(void)
{
	int alph;

	alph = '0';
	while (alph <= '9')
	{
		putchar(alph);
		while (alph != 9)
		{
		putchar(',');
		putchar(' ');
		}
		alph++;
	}
	putchar('\n');
	return (0);
}
