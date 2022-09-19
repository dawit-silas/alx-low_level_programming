/**
 * _strlen - method to calc. length of a string
 *
 * @s: param
 *
 * Return: int
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
