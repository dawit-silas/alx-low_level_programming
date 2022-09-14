#include "main.h"

/**
 * print_items - function to print items
 *
 * Return: void
 *
 * @i: arg1
 * @j: arg2
 * @n:arg3
 */

void print_items(int i, int j, int n)
{
	int m = i * j;

	if (m < 10)
	{
		if (j != 0)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar(m + '0');
	}
	else if (m < 100 && m >= 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(m / 10 + '0');
		_putchar(m % 10 + '0');
	}
	else
	{
		_putchar(' ');
		_putchar(m / 100 + '0');
		_putchar((m % 100) / 10 + '0');
		_putchar((m % 100) % 10 + '0');
	}
	if (j != n)
		_putchar(',');
}

/**
 * print_times_table - fun
 *
 * Return: void
 *
 * @n: arg
 */

void print_times_table(int n)
{
	int i;
	int j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			print_items(i, j, n);
		}
		_putchar('\n');
	}
}
