/**
 * leet - fun
 * @s: param
 * Return: char*
 */

char *leet(char *str)
{
	int i = 0, j;
	char leet[] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i] != '\0')
	{
		for (j = 0; j <= 7; j++)
		{
			if (s[i] == leet[j] || s[i] - 32 == leet[j])
			{
				s[i] = j + '0';
			}
		}
		i++;
	}
	return (s);
}

