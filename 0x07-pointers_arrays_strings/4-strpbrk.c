#include "main.h"

/**
 * _strpbrk - func
 * @s: param
 * @accept: param
 * Return: char *
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s && (char)*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == (char)*s)
			{
				return ((char *)s);
			}
		}
		++s;
	}
	return (NULL);
}
