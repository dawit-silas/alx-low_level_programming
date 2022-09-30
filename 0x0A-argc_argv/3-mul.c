#include <stdio.h>
#include <stdlib.h>

/**
 * main - print multiplication of two last argvs
 * @argc: para
 * @argv: param
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
