#include "main.h"

/**
 *  _sqrt_recursion - returns the natural square root of a number
 *  @n: number
 *
 * Return: return natural square of a number
 * t
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqr(n, 0));
}

/**
 * sqr - checks entered number from n to base
 * @n: number
 * @base: base number to use for chcking
 *
 * Return: Natural square root of a number
 */
int sqr(int n, int base)
{
	if (base * base == n)
		return (base);
	else if (base * base > n)
		return (-1);
	return (sqr(n, base + 1));
}
