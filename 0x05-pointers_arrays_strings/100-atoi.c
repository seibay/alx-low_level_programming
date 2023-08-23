#include "main.h"
#include <limits.h>

/**
 * _atoi - convert a string to an integer
 * @s: srting to be converted into an integer
 * Return: returns the converted integer
 */
int _atoi(char *s)
{
	int result;
	int sign;
	int i;

	i = 0;
	while (s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r'))
	{
		i++;
	}

	sign = 1;
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	result = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > (INT_MAX - (s[i] - '0')) / 10)
		{
			if (sign == -1)
			{
				return (INT_MIN);
			}
			else
			{
				return (INT_MAX);
			}
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (result * sign);
}
