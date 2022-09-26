#include "main.h"

/**
 * _strchr - first matching character
 * @s: param
 * @c: param
 * Return: chr *
 */

char *_strchr(char *s, char c)
{
	while (*s && (char)*s != c)
		++s;
	return ((char *)(c == (char)*s ? s : NULL));
}
