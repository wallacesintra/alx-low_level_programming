#include <stdio.h>
/**
 * main - print numbers from 0 to 9
 *
 * return - always 0(success)
 */

int main(void)
{
	int i = 0;

	while(i < 10)
	{
		printf(i);
		i++;
	}
	putchar('\n');
	return 0;
}
