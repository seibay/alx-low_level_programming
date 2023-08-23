#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: A string to be compared
 * @s2: A string to be compared
 * Return: an integer <, = or > than 0 if  s1 less, match or greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
