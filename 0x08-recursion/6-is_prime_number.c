/**
 * check_prime - fun check
 * @n: target num
 * @i: iterator
 * Return: int returm
 */

int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == i)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (check_prime(n, i + 1));
		}
	}
}

/**
 * is_prime_number - func
 * @n: param
 * Return: int
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
