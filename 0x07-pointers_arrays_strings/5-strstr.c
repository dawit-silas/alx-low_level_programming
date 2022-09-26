#include "main.h"

/**
 * _strstr - func
 * @haystack: param
 * @needle: param
 * Return: char *
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; needle[i] != '\0'; i++)
	{
		while (*haystack && (char)*haystack != needle[i])
		{
			++haystack;
		}
		if (needle[i] == (char)*haystack)
		{
			return (char *)haystack;
		}
	}
	return (NULL);
}
