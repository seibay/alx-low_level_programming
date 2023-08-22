#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int length;
	int begin;
	int end;
	char tmp;

	if (s == NULL)
	{
		return;
	}

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}

	begin = 0;
	end = length - 1;
	while (begin < end)
	{
		tmp = s[begin];
		s[begin] = s[end];
		s[end] = tmp;

		begin++;
		end--;
	}
}
