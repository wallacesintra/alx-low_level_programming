#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabetic character
 * @c: char input.
 * Return: return 0 on success and 1 on fail
 */

int _isalpha(int c)
{
	int i = isalpha(c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
