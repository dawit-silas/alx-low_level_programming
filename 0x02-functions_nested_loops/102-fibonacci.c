#include <stdio.h>

/**
 * main - fibonaci
 *
 * Return: Always 0
 */

int main(void)
{
	int i1 = 1, i2 = 2, i3, i, n = 50;

	printf("%d, %d, ", i1, i2);

	for (i = 3; i < n; i++)
	{
		i3 = i1 + i2;
		printf("%d, ", i3);
		i1 = i2;
		i2 = i3;
	}
	return (0);
}
