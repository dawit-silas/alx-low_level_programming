#include "main.h"

/**
 * print_rev - write strings in reverse manner
 *
 * @s: param string
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}

	i = len - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
