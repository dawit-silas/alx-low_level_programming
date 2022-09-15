/**
 * _isdigit - method to check if a digit
 *
 * @c: param
 *
 * Return: if digit return 1 otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
