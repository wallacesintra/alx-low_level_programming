#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *stringOut;
	unsigned int ls1, ls2, lstringOut, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lstringOut = ls1 + n;

	stringOut = malloc(lstringOut + 1);

	if (stringOut == NULL)
		return (NULL);

	for (i = 0; i < lstringOut; i++)
		if (i < ls1)
			stringOut[i] = s1[i];
		else
			stringOut[i] = s2[i - ls1];

	stringOut[i] = '\0';

	return (sout);
}