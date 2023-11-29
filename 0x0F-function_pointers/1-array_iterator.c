#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a para on each elm of an array
 * @array: an aray of function pointers
 * @size: size of the array
 * @action:the function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
