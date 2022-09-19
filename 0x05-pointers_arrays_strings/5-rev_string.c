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
	int temp;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
