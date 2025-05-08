/**
 * swap_int - swap the values of two integers
 * @a: the first integer address
 * @b: the second integer address
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
