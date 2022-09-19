#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: str param
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int len;
	char temp[10];

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
		temp[i] = s[i];
	}

	for (i = 0; i < len; i++)
	{
		s[i] = temp[len - 1 - i];
	}
}
