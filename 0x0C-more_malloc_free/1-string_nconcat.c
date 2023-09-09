#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes
 * Return: Null if it fails or the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *concatenated;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	concatenated = malloc(sizeof(char) * (len1 + n + 1));
	if (concatenated == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concatenated[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		concatenated[i] = s2[j];
	}
	concatenated[i] = '\0';
	return (concatenated);
}
