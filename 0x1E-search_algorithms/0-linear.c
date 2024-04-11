#include "search_algos.h"

/**
 * linear_search - function that searches for
 * value in an array of integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search.
 * @size: size of array.
 * @value: value to search for.
 * Return: The index of the value into the array.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
