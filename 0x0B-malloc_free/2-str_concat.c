#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 * Return: Concatenated string or Null
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int len1, len2, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	cat = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (cat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		cat[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		cat[len1 + i] = s2[i];
	}
	cat[len1 + len2] = '\0';
	return (cat);
}
