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
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error/n");
		return (1);
	}
}
