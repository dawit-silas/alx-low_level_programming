#include "main.h"

/**
 * this is a c file to display to...
 * the stdout from a to z
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
