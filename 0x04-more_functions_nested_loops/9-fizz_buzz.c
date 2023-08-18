#include <stdio.h>

/**
 * main - prints nums from 1 to 100
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) != 0)
		{
			printf("Fizz");
		} else if ((num % 3) != 0 && (num % 5) == 0)
		{
			printf("Buzz");
		} else if ((num % 3) == 0 && (num % 5) == 0)
		{
			printf("FizzBuzz");
		} else if ((num % 3) != 0 && (num % 5) != 0)
		{
			printf("%d", num);
		}

		if (num != 100)
		{
			printf(" ");
		} else
		{
			printf("\n");
		}
	}
	return (0);
}
