#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to a pointer that will be modified.
 * @to: Pointer to the new value to be set.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
