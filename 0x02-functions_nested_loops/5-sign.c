#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: number to be printed its sign
 * Return: 1 n is greater than zero, 0 n is zero, and -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
