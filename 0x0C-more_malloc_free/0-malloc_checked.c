#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - function that allocates memory using malloc.
 *@b: bytes
 *Return: pointer to the allocated memory,
 *98 (fail)
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit (98);
	}
	return (ptr);
}
