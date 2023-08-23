#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array to be reversed
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int j;
	int i;

	i = n - 1;
	j = 0;
	while (j < i)
	{
		tmp = a[j];
		a[j] = a[i];
		a[i] = tmp;
		j++;
		i--;
	}
}
