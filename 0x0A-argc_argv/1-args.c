#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: size of argv
 * @argv: An array of pointers to strings
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc);
	(void)argv;
	return (0);
}
