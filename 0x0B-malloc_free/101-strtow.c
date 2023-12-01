#include "main.h"

/**
 * count_words - counts the number of words in a string
 * @s: string to count
 *
 * Return: an integer of numbers of words
 */
int count_words(char *s)
{
	int count = 0;
	int i = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				count++;
		else if (i == 0)
			count++;
	}
	count++;
	return (count);
}

/**
 * strtow - splits a string into words
 * @str: string
 *
 * Return: a pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
	int i, j, k, l, count = 0, wc = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	count = count_words(str);
	if (count == 1)
		return (NULL);
	w = (char **)malloc(count * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[count - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			w[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (w[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(w[k]);
				free(w[count - 1]);
				free(w);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				w[wc][l] = str[i + l];
			w[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (w);
}
