#include "main.h"

/**
 * print_sign - identify sign
 *
 * Return: 1 if positive if 0 0 else -1
 *
 * @n: param
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
