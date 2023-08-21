#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to calculate its length
 * Return: length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
