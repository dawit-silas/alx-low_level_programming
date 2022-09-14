#include <stdio.h>

/**
 * main - function fibonacci
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long long int a = 1, b = 2, c;
	int i;

	printf("%lld, %lld, ", a, b);

	for (i = 3; i <= 50; i++)
	{
		c = a + b;

		if (i == 50)
			printf("%lld\n", c);
		else
			printf("%lld, ", c);

		a = b;
		b = c;
	}
	return (0);
}
