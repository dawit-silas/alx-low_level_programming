#include <stdio.h>

/**
 * main - function fibonacci
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int a = 1, b = 2, c;
	int i;

	printf("%ld, %ld, ", a, b);

	for (i = 3; i <= 50; i++)
	{
		c = a + b;

		if (i == 50)
			printf("%ld\n", c);
		else
			printf("%ld, ", c);

		a = b;
		b = c;
	}
	return (0);
}
