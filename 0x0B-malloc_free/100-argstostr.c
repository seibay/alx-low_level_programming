#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of args
 * @av: Arguments
 *
 * Return: a ptr to a new str, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *catarg;
	int len = 0, i, j, index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	catarg = (char *)malloc((len + 1) * sizeof(char));
	if (catarg == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			catarg[index++] = av[i][j];
		catarg[index++] = '\n';
	}
	catarg[index] = '\0';
	return (catarg);
}
