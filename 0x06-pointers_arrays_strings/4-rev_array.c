/**
 * reverse_array - reverse an arry
 * @a: param
 * @n: param
 * Return: none
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = n - 1; i >= (n - 1) / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
