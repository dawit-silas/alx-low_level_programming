
/**
 * _atoi - find nums
 * @s: param
 * Return: int
 */

int _atoi(char *s)
{
	int i = 0, num = 0, j = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			j = i;
			while (s[i] >= '0' && s[i] <= '9')
			{
				num *= 10;
				num += s[i] - '0';
				i++;
			}
			if (j > 0)
			{
				if (s[j - 1] == '-')
					num *= -1;
			}
			break;
		}
		i++;
	}
	return (num);
}
