#include <stdio.h>

/**
 * main - function
 *
 * Return: Always 0
 */

int main(void)
{
	int a = 1, b = 2, c;
	
	printf("%d, ", b);

	while (c <= 4000000)
	{
		c = a + b;

		if(c % 2 == 0)
			printf("%d, ", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
