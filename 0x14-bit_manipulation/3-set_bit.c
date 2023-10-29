#include "main.h"

/**
 * set_bit - function that sets the value
 * bit to 1. at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of bit.
 *
 * Return: 1 (success) -1 (failure).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	*n = (*n | i);

	return (1);
}
