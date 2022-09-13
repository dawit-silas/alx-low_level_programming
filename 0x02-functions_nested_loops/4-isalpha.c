/**
 * _isalpha - find if c is letter or not
 *
 * Return: 1 if letter 0 else
 *
 * @c: param to be pass
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
