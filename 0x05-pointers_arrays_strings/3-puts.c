#include "main.h"

/**
 * _puts - writes a str to stdout
 *
 * @str: param
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
