/**
 * swap_int - swap two ints
 *
 * @a: 1st param
 * @b: 2nd param
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
