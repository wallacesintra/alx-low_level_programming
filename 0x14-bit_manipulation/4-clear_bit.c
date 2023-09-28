#include "main.h"

/**
 * clear_bit - function sets the value of a bit to 0.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of bit.
 * Return: 1 (success), -1 (fail).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int iu;

	if (index > 63)
		return (-1);

	iu = 1 << index;

	if (*n & iu)
		*n ^= iu;

	return (1);
}
