#include "main.h"

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

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{

