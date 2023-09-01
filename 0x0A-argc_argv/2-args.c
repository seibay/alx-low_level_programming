#include "main.h"
#include <stdio.h>

/**
 * main -  prints all arguments it receives
 * @argc: size of argv array and number of command line arguments
 * @argv: array of size argc and it contains the program cl argts
 *
 * Return: returns all arguments it receives
 */
int main(int argc, char *argv[])
{
	for (argc = 0; argv[argc]; argc++)
	{
		printf("%s\n", argv[argc]);
	}
	return (0);
}
