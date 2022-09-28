/**
 * factorial - fun
 * @n: param
 * Return: int
 */

int factorial(int n)
{
	if (n <= 1)
	{
		if (n < 0)
			return (-1);
		else
			return (n);
	}
	return (n * factorial(n - 1));
}
