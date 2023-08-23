#include "main.h"

/**
 * _strcpy - copies string pointed to by src to buffer pointed to by dest
 * @dest: The buffer to copy the string to.
 * @src: The string to be copied.
 *
 * Return: A pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}
