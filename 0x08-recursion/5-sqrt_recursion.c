#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Number to find its square root
 * Return: Square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (cal_sqrt(n, 0));
}

/**
 * cal_sqrt - checks the input number from n to the base
 * @n: number is squared and compared against base
 * @base: base number to check
 * Return: natural square root of number base
 */
int cal_sqrt(int n, int base)
{
	if (base * base == n)
	{
		return (base);
	}
	if (base * base > n)
	{
		return (-1);
	}
	return (cal_sqrt(n, base + 1));
}
