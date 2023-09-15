#include "3-calc.h"

/**
 * op_add - addition operation
 * @a: number one
 * @b: number two
 * Return: result of addition
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction operation
 * @a: number one
 * @b: number two
 * Return: result of subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication operation
 * @a: number one
 * @b: number two
 * Return: result of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division operation
 * @a: number one
 * @b: number two
 * Return: result of division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modulo operation
 * @a: number one
 * @b: number two
 * Return: result of modulo
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
