#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of CL args
 * @argv: contains the program CL args
 * Return: result of the multiplication
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc == 3)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
