#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all- function that returns the sum of all its parameters.
 * @n: int, numbers to add.
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numeros;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(numeros, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numeros, int);
	}

	va_end(numeros);
}
