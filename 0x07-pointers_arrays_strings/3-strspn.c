#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: input
 * @accept: input
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int i;

	n = 0;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}
