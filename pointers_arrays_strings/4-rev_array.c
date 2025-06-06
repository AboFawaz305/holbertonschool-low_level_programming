/**
 * reverse_array - reverse the array a with size n
 * @a: the array to be reversed
 * @n: the size of a
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i < (n / 2))
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
