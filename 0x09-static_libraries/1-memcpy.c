#include "main.h"

/**
 * _memcpy - copies a specified # of bytes from one memory location to another
 * @dest: destination memory
 * @src: source memory
 * @n: Number of bytes to copy
 * Return: Copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;
	int b = n;

	for (a = 0; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
