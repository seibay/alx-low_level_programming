#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @a: its absolute value
 * Return: a if greater than or equal to 0, and -a otherwise
 */
int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (-a);
}
