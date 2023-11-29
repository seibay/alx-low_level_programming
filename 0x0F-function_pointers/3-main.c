#include "3-calc.h"

/**
 * main - check the code
 * @argc: number of args
 * @argv: args
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int (*op_ft)(int, int), a, b;

	if (argc != 4)
		printf("Error\n"), exit(98);
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_ft = get_op_func(argv[2]);
	if (!op_ft)
		printf("Error\n"), exit(99);
	printf("%d\n", op_ft(a, b));
	return (0);
}

