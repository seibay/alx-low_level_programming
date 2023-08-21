#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: an integer to be swaped.
 * @b: an integer to be swaped.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
