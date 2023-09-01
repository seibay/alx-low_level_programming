#include "main.h"
#include <stdio.h>

/**
 * main - prints its name
 * @argc: size of argv array and number of command line arguments
 * @argv: array of size argc and it contains the program CL argts
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
