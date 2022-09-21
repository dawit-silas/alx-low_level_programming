/**
 * _strncpy - copy a string to nth index
 * @dest: param1
 * @src: param2
 * @n: param3
 * Return: char*
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	while (i < n)
	{
		if (i < len)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
		i++;
	}

	for (i = n - 1; dest[i] != '\0'; i++)
	{
		dest[i] = '*';
	}
	dest[i] = '\0';
	return (dest);
}
