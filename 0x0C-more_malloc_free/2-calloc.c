#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array,using malloc.
 * @nmemb: no of elements.
 * @size: size of bytes.
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, returns NULL.
 * if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int arraySize;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	arraySize = nmemb * size;

	for (i = 0; i < (arraySize); i++)
		ptr[i] = 0;

	return (ptr);
}
