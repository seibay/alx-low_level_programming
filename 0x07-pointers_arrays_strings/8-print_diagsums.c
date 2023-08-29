#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals.
 * @a: Pointer to the square matrix
 * @size: size of the matrix
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int sum1;
	int sum2;
	int i;

	sum1 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
