#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: Number
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
