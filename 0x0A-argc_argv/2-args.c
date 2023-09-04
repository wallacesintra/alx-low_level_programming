#include <stdio.h>

/**
 *main - prints all arguments it receive.
 *@argc : number of arguments.
 *@argv : array of arguments.
 *Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc - 1)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
