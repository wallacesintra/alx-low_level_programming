#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates arguments of a program.
 * @ac: number of argument.
 * @av: argument vector.
 * Return: pointer of the array.
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int count, i, j, z;

	if (ac == 0)
		return (NULL);

	for (count = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			count++;
		count++;
	}

	ptr = malloc((count + 1) * sizeof(char));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = j = z = 0; z < count; j++, z++)
	{
		if (av[i][j] == '\0')
		{
			ptr[z] = '\n';
			i++;
			z++;
			j = 0;
		}
		if (z < count - 1)
			ptr[z] = av[i][j];
	}
	ptr[z] = '\0';

	return (ptr);
}
