/**
 * cap_string - func to capitalize
 * @s: param
 * Return: char*
 */

char *cap_string(char *s)
{
	int len = 0, i;
	int separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + len) >= 'a' && *(s + len) <= 'z')
	{
		*(s + len) = *(s + len) - 32;
	}
	len++;

	while (*(s + len) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + len) == separators[i])
			{
				if ((*(s + (len + 1)) >= 'a') && (*(s + (len + 1)) <= 'z'))
				{
					*(s + (len + 1)) = *(s + (len + 1)) - 32;
				}
				break;
			}
		}
		len++;
	}
	return (s);
}
