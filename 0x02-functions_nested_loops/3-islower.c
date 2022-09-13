/**
 * _islower -checks if lower or not
 *
 * Return: 1 for lower 0 for other
 *
 * @c: param
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
