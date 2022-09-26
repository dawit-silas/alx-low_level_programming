/**
 * _memcpy - memory copy
 * @dest: param
 * @src: param
 * @n: param
 * Return: char*
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
