/**
 * get_sqrt - func
 * @i: param
 * @n: target
 * Return: int
 */

int get_sqrt(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (get_sqrt(i + 1, n));
	}
}

/**
 * _sqrt_recursion - func
 * @n: param
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (get_sqrt(1, n));
}
