#include <stdio.h>

/**
 * print_array - prints n members of an array
 * @a: int array
 * @n: int param
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n-1)
			printf(", ");
	}
	printf("\n");
}
