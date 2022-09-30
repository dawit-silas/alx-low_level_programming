#include <stdio.h>
#include <stdlib.h>

/**
 * main - changes
 * @argc: param
 * @argv: param
 * Return: 0 success 1 fail
 */

int main (int argc, char *argv[])
{
	int cents;
	int count = 0;

	if (argc > 2 || argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	count += cents / 25;
	cents %= 25;
	count += cents / 10;
	cents %= 10;
	count += cents / 5;
	cents %= 5;
	count += cents / 2;
	cents %= 2;
	count += cents;
	printf("%d\n", count);
	return (0);
}
