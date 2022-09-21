/**
 * _strncat - concatenate a string to a given bytses
 * @dest: param 1
 * @src: param 2
 * @n: param in bytes
 * Return: char*
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (src[i] != '\0' && i < n)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
