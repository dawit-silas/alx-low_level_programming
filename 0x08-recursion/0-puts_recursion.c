#include "main.h"

/**
 * _puts_recursion - func
 * @s: param
 * Return: none
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	++s;
	_puts_recursion(s);
}
