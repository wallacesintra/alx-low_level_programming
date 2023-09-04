#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplies two numbers
 *@argc: number of argument.
 *@argv: array of argument.
 *Return: 1 (success)
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		printf("%d\n", a * b);
		return (0);
	}
	else
	{
		printf("Error/n");
		return (1);
	}
}
