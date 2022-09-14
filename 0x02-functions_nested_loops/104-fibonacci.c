#include <stdio.h>

/**
 * main - function fib...
 *
 * Return: Always 0
 */

int main(void)
{
	double a = 1, b = 2, c;
	int i;

	printf("%.0f, %.0f, ", a, b);

	for (i = 0; i <= 98; i++)
	{
		c = a + b;
		if (i == 98)
			printf("%.0f\n", c);
		else
			printf("%.0f, ", c);

		a = b;
		b = c;
	}
	return (0);
}
