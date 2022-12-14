/**
 * check_pal - function
 * @s: characters
 * @i: index
 * @len: length
 * Return: int
 */

int check_pal(char *s, int i, int len)
{
	if (i == len)
		return (1);
	if (s[i] != s[len])
		return (0);

	if (i < len + 1)
		return (check_pal(s, i + 1, len - 1));
	return (1);
}

/**
 * get_len - fun to find length
 * @s: param
 * Return: int
 */

int get_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + get_len(s + 1));
	}
}

/**
 * is_palindrome - func
 * @s: param
 * Return: int
 */

int is_palindrome(char *s)
{
	int len = get_len(s);

	if (len == 0)
		return (1);
	return (check_pal(s, 0, len - 1));
}
