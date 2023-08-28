#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string
 * Return: A string after encoding
 */
char *rot13(char *s)
{
	char *n = s;
	char *s1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *s2 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *p = s1;
	char *q = s2;

	while (*n)
	{
		while (*p && *p != *n)
		{
			p++;
			q++;
		}
		if (*p)
		{
			*n = *q;
		}
		n++;
	}
	return (s);
}
