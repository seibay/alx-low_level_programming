#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capitalized
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int cap_next;

	cap_next = 1;
	while (*ptr != '\0')
	{
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' || *ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' || *ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			cap_next = 1;
		}
		else if ((*ptr >= 'a' && *ptr <= 'z') && (cap_next))
		{
			*ptr = *ptr - 'a' + 'A';
			cap_next = 0;
		}
		else
		{
			cap_next = 0;
		}
		ptr++;
	}
	return (str);
}
