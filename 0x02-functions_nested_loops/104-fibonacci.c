#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 *
 * Return: 0;
 */
int main(void)
{
	unsigned long int fir = 1;
	unsigned long int sec = 2;
	unsigned long int tmp;
	unsigned int count;

	printf("%lu, %lu", fir, sec);
	for (count = 2; count < 98; ++count)
	{
		tmp = sec;
		sec = sec + fir;
		fir = tmp;
		printf(", %lu", sec);
	}
	printf("\n");
	return (0);
}
