#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * Return: last digit
 *
 * @n: param
 */

int print_last_digit(int n)
{
	int r = n % 10;

	if (r < 0)
		r = r * -1;
	_putchar(r + '0');
	return (r);
}
