#include <stdio.h>
#include <stdlib.h>

/**
 * main- multiplies two numbers
 * @argc: number of arguments
 * @argv: array of command line arguments
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
	int i, product;

	if (argc == 3)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
