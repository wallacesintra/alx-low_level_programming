#include "main.h"

/**
 * _strstr - finds the first part of the substring needle
 * in the string haystack.
 * @haystack: the whole string.
 * @needle: part of the string.
 * Return: pointer to the beginning of the located substring or
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (0);
}
