#include <stdio.h>

/**
 * main - print the alphabets in lower and upper case
 *
 * return: Always 0(success)
 */
int main(void)
{
	char alphabets[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i=0;i<52;i++)
	{
		putchar(alphabets[i]);
	}
	putchar('\n');
	return 0;
}
