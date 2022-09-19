/**
 * _strcpy - copy an array
 * @dest: param
 * @src: param
 * Return: char*
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return dest;
}
