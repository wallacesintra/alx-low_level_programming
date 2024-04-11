#include "search_algos.h"

/**
 * binary_search - function that searches for a value in
 *      sorted array of integers using the Binary search algorithm
 * @array: A pointer to first element of the array to search in.
 * @size: The size of array.
 * @value: The value to search for.
 * Return: The index of the value is located into the array.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t m = 0, i = 0, l = 0, r = size - 1;

	if (size <= 0 || !array)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i < r)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
