#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: 1 if s is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (is_palindrome_recursive(s, 0, len - 1));
}

/**
 * is_palindrome_recursive - check palindrome recursively
 * @s: Input string
 * @start: Starting index for comparison
 * @end: Ending index for comparison
 * Return: 1 if substring is a palindrome and 0 if not
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_recursive(s, start + 1, end - 1));
}
