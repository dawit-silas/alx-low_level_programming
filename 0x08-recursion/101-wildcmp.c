/**
 * match - method
 * @s1: param
 * @s2: param
 * @i: param
 * @j: param
 * Return: int
 */

int match(char *s1, char *s2, int i, int j)
{
	if (s2[i] == '\0')
	{
		if (s1[j] == '\0')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else if (s2[i] == '*')
	{
		for (; s1[j] != '\0'; j++)
		{
			if (match(s1, s2, i + 1, j))
			{
				return 1;
			}
		}
		return (match(s1, s2, i + 1, j));
	}
	else if (s2[i] != '?' && s2[i] != s1[j])
	{
		return (0);
	}
	else
	{
		return (match(s1, s2, i + 1, j + 1));
	}
}

/**
 * wildcmp - fun
 * @s1: param
 * @s2: para,
 * Return: int
 */

int wildcmp(char *s1, char *s2)
{
	return (match(s1, s2, 0, 0));
}
