#include "main.h"

/**
 * leet - encodes a string into 1337 (leet).
 * @s: string to be encoded
 * Return: A string after encoding.
 */
char *leet(char *s)
{
	int i;
	char *n = s;
	char *s1 = "aAeEoOtTlL";
	char *s2 = "4433007711";

	while (*n)
	{
		for (i = 0; s1[i]; i++)
		{
			if (*n == s1[i])
			{
				*n = s2[i];
				break;
			}
		}
		n++;
	}
	return (s);
}
