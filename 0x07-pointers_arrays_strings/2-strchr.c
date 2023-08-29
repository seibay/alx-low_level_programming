#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: A string where we will look inside it for a char
 * @c: The character to be located
 * Return: a pointer to first occurrence of c in s, or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
