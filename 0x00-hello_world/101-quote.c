#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char g[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(g, 59, 1, stderr);
	return (1);
}
