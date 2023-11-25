#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: size of argv
 * @argv: An array of pointers to strings
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	printf("%d\n", argv[argc - 2] * argv[argc - 1]);
	return (0);
}
