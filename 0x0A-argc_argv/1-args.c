#include <stdio.h>
#define UNUSED(argv) (void)(argv)

/**
 * main - function to print number of argvs
 * @argc: param
 * @argv: param
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
