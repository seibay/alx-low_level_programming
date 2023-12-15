#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: an array of nmemb elements 
 * @size: elements of size bytes
 *
 * Return: returns a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	unsigned char *byte_ptr = (unsigned char *)ptr;
	for (unsigned int i = 0; i < nmemb * size; i++)
	{
		byte_ptr[i] = 0;
	}
	return (ptr);
}
