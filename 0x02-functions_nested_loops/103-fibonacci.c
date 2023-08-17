#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * Return: 0
 */
int main(void)
{
	int count;
	unsigned long int i, j, res, sum;

	i = 1;
	j = 2;
	sum = 0;
	for (count = 1; count <= 33; count++)
	{
		if (i < 4000000 && (i % 2) == 0)
		{
			sum += i;
		}
		res = i + j;
		i = j;
		j = res;
	}
	printf("%lu\n", sum);
	return (0);
}
