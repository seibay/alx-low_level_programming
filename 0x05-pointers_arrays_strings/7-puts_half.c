#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to print half of it
 */
void puts_half(char *str)
{
	int length;
	int index;
	int i;

	if (str == NULL)
	{
		return;
	}

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		index = length / 2;
	}
	else
	{
		index = (length - 1) / 2 + 1;
	}

	for (i = index; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
