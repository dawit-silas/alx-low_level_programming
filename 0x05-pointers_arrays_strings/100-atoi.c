
/**
 * _atoi - find nums
 * @s: param
 * Return: int
 */

int _atoi(char *s)
{
	int i = 0, num = 0, sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				num *= 10;
				num += s[i] - '0';
				i++;
			}
			num *= sign;
			break;
		}
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	return (num);
}
