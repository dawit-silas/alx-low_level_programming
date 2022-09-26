/**
 * _strspn - function matching length
 * @s: param
 * @accept: param
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0, prevCount;

	for (i = 0; s[i] != '\0'; i++)
	{
		prevCount = count;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (prevCount == count)
		{
			break;
		}
	}
	return (count);
}
