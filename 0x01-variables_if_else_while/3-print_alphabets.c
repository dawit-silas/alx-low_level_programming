#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	char d;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (d = 'A'; d <= 'Z'; d++)
	{
		putchar(d);
		if (d == 'Z')
			putchar('\n');
	}
	return (0);
}
