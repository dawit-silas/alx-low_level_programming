/**
 * _strcmp - function to campare
 * @s1: param1
 * @s2: param2
 * Return: str
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s2 == *s1)
	{
		s2++;
		s1++;
	}
	return (*s1 - *s2);
}
