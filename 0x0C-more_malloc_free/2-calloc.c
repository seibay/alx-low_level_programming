#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

if (ptr == NULL)
return (NULL);

unsigned char *byte_ptr = (unsigned char *)ptr;
for (unsigned int i = 0; i < nmemb * size; i++)
{
byte_ptr[i] = 0;
	}
	return (ptr);
}

