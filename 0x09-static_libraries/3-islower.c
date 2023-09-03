#include"main.h"

/**
 * _islower - check if a character is lowercase
 * @c: input character
 * Return: returns 1 if the character is lowercase
 *         otherwise always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
