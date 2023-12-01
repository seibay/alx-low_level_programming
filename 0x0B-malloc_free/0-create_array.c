#include "main.h"

/**
 * create_array - creates an arr of chars
 * @size: Size of the array
 * @c: The specified character to initalize the array with
 *
 * Return: Returns NULL if size = 0 or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
