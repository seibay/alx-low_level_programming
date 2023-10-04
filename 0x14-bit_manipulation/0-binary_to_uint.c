#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result << 1;/* if result contains  0010, it will be 0100,*/
						/* which is 4 in decimal (multipies by 2 (*2)).*/
						/* This op make room for the next binary digit*/
						/* to be added */
			result += (b[i] - '0');/* if b[i] = '1', '1' - '0' = 1 */
						/* if b[i] = '0', '0' - '0' = 0 */
						/* convert the binary digit char to int value */
			i++;/*  moves to the next character in the string b */
		}
		else
			return (0);
	}
	return (result);
}
