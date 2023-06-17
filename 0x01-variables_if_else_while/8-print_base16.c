#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	for (i = 6; i < 12; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
