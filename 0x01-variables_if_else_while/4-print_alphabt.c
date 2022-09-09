#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' &&  c != 'e')
			putchar(c);
		if (c == 'z')
			putchar('\n');
	}
	return (0);
}
