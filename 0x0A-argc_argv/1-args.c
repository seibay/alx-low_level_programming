#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: size of argv array and number of command line arguments
 * @argv: array of size argc and it contains the program cl argts
 * Return: returns number of arguments
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
