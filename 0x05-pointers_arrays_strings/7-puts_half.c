#include "main.h"

/**
 * puts_half - print the last half
 * @str: param
 * Return: nothing
 */

void puts_half(char *str)
{
	int i;
	int len = 0;
	int n;

	while (str[len] != '\0')
	{
		len++;
	}

	n = len % 2 == 0 ? len / 2 : (len - 1) / 2;

	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
