#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: an array
 * @n: number of elements in the array
 */
void print_array(int *a, int n)
{
	int i;

	if (a == NULL || n <= 0)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n  - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
