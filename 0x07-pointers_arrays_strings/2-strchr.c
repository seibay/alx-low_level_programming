#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: A string where we will look inside it for a char
 * @c: The character to be located
 * Return: a pointer to first occurrence of c in s, or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
