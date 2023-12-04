#include "main.h"

/**
 * is_prime_number - returns 1 if the integer is a prime number, otherwise 0
 * @n: number
 *
 * Return: 1 if n is prime, else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_recursive(n, n - 1));
}

/**
 * is_prime_recursive - Check if a number is prime recursively
 * @n: Number to check
 * @div: Current divisor being checked
 *
 * Return: 1 if n is prime, else 0
 */
int is_prime_recursive(int n, int div)
{
	if (div <= 1)
		return (1);
	if (n % div == 0)
		return (0);
	return (is_prime_recursive(n, div - 1));
}
