#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: str param
 * Return: void
 */

void rev_string(char *s)
{
	char temp[10];
	int i;
	int len = 0;

	while (s[len] != '\0')
	{
		temp[len] = s[len];
		len++;
	}

	for (i = 0; i < len; i++)
	{
		s[i] = temp[len - 1 - i];
	}
}
