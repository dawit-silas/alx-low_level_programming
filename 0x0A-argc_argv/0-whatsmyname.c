#include <stdio.h>
#define UNUSED(argc) (void)(argc)

/**
 * main - that prints program name
 * @argc: param no. of strs in argv
 * @argv: string array
 * Return: Always 0 success
 */

int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
