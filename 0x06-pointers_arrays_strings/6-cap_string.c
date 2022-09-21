/**
 * cap_string - func to capitalize
 * @s: param
 * Return: char*
 */

char *cap_string(char *s)
{
	int i = 0, j;
	int separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int size = sizeof(separators) / sizeof(separators[0]);

	while (s[i] != '\0')
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] += 32;
		}
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] -= 32;
			}
			else
			{
				for (j = 0; j < size; j++)
				{
					if (s[i - 1] == separators[j])
					{
						if(s[i - 1] == '\t')
							s[i - 1] = ' ';
						s[i] -= 32;
						break;
					}
				}
			}
		}
		i++;
	}
	return (s);
}
